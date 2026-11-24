#include <stdio.h>
//Function Prototype
int factorial(int);
//Function Definition
int factorial(int n){
    int f; 
    if (n==0 || n==1){
        return 1;
    } else {
        f = factorial(n - 1)*n;
        return f;
    } 
}
int main()
{
    int a = 5;
    
    factorial(a); //Function Call
    printf("Factorial of the number %d is %d", a, factorial(a));
    
    return 0;
}
