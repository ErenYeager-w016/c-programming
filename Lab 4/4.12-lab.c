#include <stdio.h>

int fibonacci_rec(int n) {
    if (n <= 1) return n;
    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
        printf("%d ", fibonacci_rec(i));
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
