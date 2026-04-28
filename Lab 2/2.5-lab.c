#include <stdio.h>

int main() {
    int i = 10;
    int sum = 0;
    printf("Numbers from 10 to 1: ");
    while (i >= 1) {
        printf("%d ", i);
        sum += i;
        i--;
    }
    
    printf("\nSum: %d\n", sum);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
