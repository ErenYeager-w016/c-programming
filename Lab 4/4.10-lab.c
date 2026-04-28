#include <stdio.h>

int power_rec(int a, int b) {
    if (b == 0) return 1;
    return a * power_rec(a, b - 1);
}

int main() {
    int a, b;
    printf("Enter base and power: ");
    scanf("%d %d", &a, &b);
    
    printf("%d raised to %d: %d\n", a, b, power_rec(a, b));
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
