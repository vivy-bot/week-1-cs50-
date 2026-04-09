// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i < 10)
//     {
//         printf("happy birthday %d\n", i + 1);
//         i = i + 1;
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int countdown = 3;
    while (countdown > 0)
    {
        printf("%d\n", countdown);
        countdown = countdown - 1;
    }
    printf("blast off!\n");
    return 0;
}