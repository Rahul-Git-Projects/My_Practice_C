#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int random_number = rand() % 21;
    int attempts_left = 5;
    int user_guess;

    printf("This is a number guessing game\ni have chosen a number from 0 to 20 and you have totry to  guess it\nyou have 5 tries\nGood luck!");
    while (attempts_left > 0)
    {
        printf("\nGuess the number: ");
        scanf("%d", &user_guess);
        while (user_guess < 0 || user_guess > 20)
        {
            printf("\nYour guess is not in the range of the numbers i have mentioned please try again: ");
            scanf("%d", &user_guess);
        }
        if (user_guess < random_number)
        {
            printf("\nYour number is too low!");
        }
        else if (user_guess > random_number)
        {
            printf("\nYour number is too high!");
        }
        else if (user_guess == random_number)
        {
            printf("\nCongrats! You guessed the number and won the game!");
            break;
        }

        --attempts_left;
        printf("attempts left: %d", attempts_left);
    }
}
