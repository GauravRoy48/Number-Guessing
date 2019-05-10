#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rando = 0;
    int guess = 0;
    int numGuess;
    time_t t;

    // Initialization of random number generator
    srand((unsigned) time(&t));

    // get the random number
    rando = rand() % 21;

    printf("\nGuessing Game.");
    printf("\nGuess the chosen number between 0 and 20. \n");

    for(numGuess = 5; numGuess > 0; numGuess--)
    {
        printf("\nYou have %d tr%s left.", numGuess, numGuess == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if(guess == rando)
        {
            printf("\nCongratulations!\n");
            return;
        }
        else if(guess < 0 || guess > 20)
        {
            printf("Number should be between 0 and 20.\n");
            numGuess++;
        }
        else if(rando > guess)
            printf("%d is wrong.  Number is greater than that.\n", guess);
        else if(rando < guess)
            printf("%d is wrong.  Number is less than that.\n", guess);
    }
    printf("\nYou failed. The number was %d\n",rando);

    return 0;
}
