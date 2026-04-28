#include <stdio.h>

int sum_twenty(int n) {
    if (n <= 0) return 0;
    return n + sum_twenty(n - 1);
}

int main() {
    printf("Sum of first 20 natural numbers: %d\n", sum_twenty(20));
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
