#include <stdio.h>

long int factorial(int n, int result) {
    if (n <= 1) return result;
    return factorial(n - 1, result * n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Factorial: %ld\n", factorial(n, 1));
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
