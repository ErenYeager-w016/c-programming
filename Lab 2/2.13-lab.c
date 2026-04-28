#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sum = 0;
    int temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    printf("Sum of digits: %d\n", sum);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
