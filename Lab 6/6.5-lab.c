#include <stdio.h>

void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Before exchange: x=%d, y=%d\n", x, y);
    exchange(&x, &y);
    printf("After exchange: x=%d, y=%d\n", x, y);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
