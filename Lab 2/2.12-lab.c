#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int product = 1;
    int temp = num;
    while (temp > 0) {
        product *= temp % 10;
        temp /= 10;
    }
    
    printf("Product of digits: %d\n", product);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
