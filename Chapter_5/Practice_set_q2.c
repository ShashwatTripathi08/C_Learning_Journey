#include<stdio.h>

int main(){
    float C;
    float F;

    printf("Enter degrees in Celsius: ");
    scanf("%f", &C);

    if (C >= 32){
        F = (C * 1.8) + 32;
    }

    printf("\nDegree Celsius conversion to degree Fahrenheit is: %f", F);

    return 0;
}