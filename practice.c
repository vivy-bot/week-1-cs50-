// #include <stdio.h>
// int main()
// {

//     int length, width;
//     printf("Enter length and width of the rectangle: ");
//     scanf("%d %d", &length, &width);
//     int area = length * width;
//     printf("Area of the rectangle is: %d\n", area);
// }

#include <stdio.h>
int main()
{

    int celsius;
    float fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("your temperature in Fahrenheit is: %.2f\n", fahrenheit);
    return 0;
}