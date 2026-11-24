#include <stdio.h>
//Function Prototype
int change(int);
//Function Definition
int change(int x){
    x = 75; // Misnomer
    return x;
}

int main()
{
    int a = 12;
    
    change(a); //Function Call
    printf("%d", a);
    
    return 0;
}
