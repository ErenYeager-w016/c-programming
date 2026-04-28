#include <stdio.h>

float product(float f, int i) {
    return f * i;
}

int main() {
    float f;
    int i;
    printf("Enter a float and an int: ");
    scanf("%f %d", &f, &i);
    
    printf("Product: %.2f\n", product(f, i));
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
