#include <stdio.h>

long int factorial_rec(int n) {
    if (n <= 1) return 1;
    return n * factorial_rec(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Factorial using recursion: %ld\n", factorial_rec(n));
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
