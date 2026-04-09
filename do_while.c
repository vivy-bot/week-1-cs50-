// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("%d\n", i);
//         i++;
//     } while (i < 5);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    return 0;
}