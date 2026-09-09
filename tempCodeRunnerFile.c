#include <stdio.h>

float average ( int length, float numbers[])
{ 
    float sum = 0.0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    
    }
    return sum / length;
}

int main(void){

    const int N = 3;
    float scores[N];
    for (int i = 0; i < N; i++){
        printf("Enter Your Score : \n" );
        scanf("%f", &scores[i]);
    }
    printf("Your Average score is : %f\n", average(N, scores));
    return 0;
}
