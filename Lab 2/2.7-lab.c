#include <stdio.h>

int main() {
    int num, positive = 0, negative = 0, zeros = 0;
    
    printf("Enter numbers (enter 0 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0 && positive == 0 && negative == 0) break;
        
        if (num > 0) positive++;
        else if (num < 0) negative++;
        else zeros++;
    }
    
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zeros: %d\n", zeros);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
