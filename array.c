#include <stdio.h>

int main(void)
{

    int array[100];
    for (int i = 0; i < 100; i++)
    {
        array[i] = i + 1;
    }

    printf("array = {");
    for (int i = 0; i < 100; i++)
    {
        printf("%d", array[i]);
        if (i < 99)
            printf(", ");
    }
    printf("}\n");

    return 0;
}