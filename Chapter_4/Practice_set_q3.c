#include<stdio.h>

int main(){
    int i = 1;
    int n = 0;

    while (i<=10)
    {
        n += i;
        i++;
    }
    printf("The sum of first 10 natural numbers is %d", n);
    return 0;
}