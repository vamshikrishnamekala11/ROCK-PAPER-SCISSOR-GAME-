#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Function to implement the game
int game(char you, char computer)
{
    /* If both the you and computer
    has choose the same thing*/
    if (you == computer)
        return -1;
 
    /* If you choice is stone and
    computer's choice is paper*/
    if (you == 's' && computer == 'p')
        return 0;
 
            /* If you choice is paper and
             computer's choice is stone*/
            else if (you == 'p' && computer == 's') return 1;
 
    /* If you choice is stone and
     computer's choice is scissor*/
    if (you == 's' && computer == 'z')
        return 1;
 
    /* If you choice is scissor and
    computer's choice is stone*/
    else if (you == 'z' && computer == 's')
        return 0;
 
    // If you choice is paper and
    // computer's choice is scissor
    if (you == 'p' && computer == 'z')
        return 0;
 
    // If you  choice is scissor and
    // computer's choice is paper
    else if (you == 'z' && computer == 'p')
        return 1;
}
 

int main()
{
    
    int n;
 
    char you, computer, result;
 
    // Chooses the random number
    // every time
    srand(time(NULL));
 
    // Make the random number less
    // than 100, divided it by 100
    n = rand() % 100;
 
    // Using simple probability 100 is
    // roughly divided among stone,
    // paper, and scissor
    if (n < 33)
 
        // s is denoting Stone
        computer = 's';
 
    else if (n > 33 && n < 66)
 
        // p is denoting Paper
        computer = 'p';
 
    // z is denoting Scissor
    else
        computer = 'z';
 
    printf("Enter s for stone\n ");
    printf("enter  z for scissor\n ");
    printf ("enter p for paper\n");
 
    // input from the you
    scanf("%c", &you);
 
    // Function Call to play the game
    result = game(you, computer);
 
    if (result == -1) {
        printf("Game Draw!\n");
    }
    else if (result == 1) {
        printf("Wow! You have won the game!\n");
    }
    else { 
        printf("You have lost the game!\n");
    }
        printf("You choose : %c and Computer choose : %c\n",you, computer);
 
    return 0;
}    