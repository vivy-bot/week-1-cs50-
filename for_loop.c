// #include <stdio.h>
// int main()
// {
//     int n = 6;
//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 5;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, n = 0;
    for (i = 0; i <= 5; i++)
    {
        n = n + i;
    }
    printf("%d\n", n);
    return 0;
}