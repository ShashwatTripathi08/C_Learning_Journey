#include<stdio.h>

int main(){
    float m;
    float g = 9.8;
    float F;

    printf("Enter mass in kgs = ");
    scanf("%f", &m);

    if (m > 0){

        F = m * g;

    }
    printf("\nThe forge exerted by earth on the given mass is %f", F);
    
    return 0;
}