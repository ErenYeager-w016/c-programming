#include <stdio.h>

int main() {
    printf("Pattern:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
