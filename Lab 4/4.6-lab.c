#include <stdio.h>

int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++)
        result *= a;
    return result;
}

int main() {
    int a, b;
    printf("Enter base and power: ");
    scanf("%d %d", &a, &b);
    
    printf("%d raised to %d: %d\n", a, b, power(a, b));
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
