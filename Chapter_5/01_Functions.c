#include <stdio.h>
//Function Prototype
int sum(int, int);
//Function Definition
int sum(int x, int y){
    printf("The sum of the two numbers is %d", x+y);
    return x+y;
}

int main()
{
    int a = 12;
    int b = 15;
    
    sum(a, b); //Function Call

    return 0;
}
