#include <stdio.h>

int main() {
    printf("Armstrong numbers between 1 and 500:\n");
    
    for (int num = 1; num <= 500; num++) {
        int sum = 0, temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num)
            printf("%d ", num);
    }
    
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
