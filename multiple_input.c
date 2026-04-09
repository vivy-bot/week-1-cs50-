#include <stdio.h>
int main()
{
    char name[50];
    int age;
    char no;

    printf("enter your name:");
    scanf("%s", name);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("enter a random charecter (0-9): ");
    scanf(" %c", &no);
    printf("your name is %s, your age is %d and your charecter is %c\n", name, age, no);
    return 0;
}