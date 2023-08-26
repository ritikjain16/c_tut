#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, nguess=1;
    srand(time(0));
    num = rand() % 100 + 1;
    // printf("the value of num is %d\n", num);

    do
    {
        printf("guess the no. between 1 to 100\n");
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("enter the higher no.\n");
        }
        else if (guess > num)
        {
            printf("enter the smaller no.\n");
        }
        else
        {
            printf("you guessed the number in %d attempts.\n", nguess);
        }
        nguess++;

    } while (guess != num);

    return 0;
}