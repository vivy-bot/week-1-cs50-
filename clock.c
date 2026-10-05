#include <stdio.h>
#include <windows.h>
#include "clock.h"

int main(void)
{

    int hour;
    int minute;
    int second = 0;

    printf("Enter the hour: ");
    scanf("%d", &hour);

    printf("Enter the minute: ");
    scanf("%d", &minute);

    if (second <= 60)
    {
        if (second == 60)
        {
            second = 0;
            minute++;
        }
        else
        {
            second;
        }
    }

    if (minute <= 60)
    {
        if (minute == 60)
        {
            minute = 0;
            hour++;
        }
        else
        {
            minute;
        }
    }

    while (1)

    {
        NewFunction();

        second++;

        {
            printf(" \r%02d:%02d:%02d", hour, minute, second);
        }
    }
}
void NewFunction()
{
    Sleep(1000);
}