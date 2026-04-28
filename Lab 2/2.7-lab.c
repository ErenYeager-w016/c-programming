#include <stdio.h>

int main() {
    int num, positive = 0, negative = 0, zeros = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zeros++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zeros: %d\n", zeros);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
