#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("guess a number between 1-100\n");
    int number;
    scanf("%d", &number);

    srand(time(0));
    int random_number = (rand() % 100) + 1;

    while (number != random_number)
    {

        if (number < random_number)
        {
            printf("Higher! Try again.\n");
        }
        else
        {
            printf("Lower! Try again.\n");
        }
        scanf("%d", &number);
    }
    printf("Congratulations! You guessed the number %d correctly!\n", random_number);
    return 0;
}