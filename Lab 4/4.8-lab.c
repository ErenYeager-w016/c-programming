#include <stdio.h>

int sum_series(int n) {
    if (n <= 0) return 0;
    return n + sum_series(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Sum of 1+2+3+...+%d: %d\n", n, sum_series(n));
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
