#include <stdio.h>

void myFunction(int myNumb[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", myNum[i]);
    }
}

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);
    return 0;
}
