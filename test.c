#include <stdio.h>
int main()
{
    char name[50];
    printf("enter your name: ");
    scanf("%s", name);
    printf("your name is: %s\n", name);

    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    printf("your age is: %d\n", age);

    printf("your name is %s and your age is %d\n", name, age);

    return 0;
}