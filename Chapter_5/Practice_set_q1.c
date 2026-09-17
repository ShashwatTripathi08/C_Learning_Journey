#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    float d;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("\nEnter second number: ");
    scanf("%d", &b);

    printf("\nEnter third number: ");
    scanf("%d", &c);

    if (a,b,c > 0);{
        d = (a + b + c)/3;
        printf("The average of the 3 numbers is %f", d);

    }
    return 0;
}