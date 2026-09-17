#include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: if n is 0 or 1, return n
    if (n <= 1) {
        return n;
    }
    // Recursive step: sum of the previous two terms
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    
    // Loop to print each term up to the requested number
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
