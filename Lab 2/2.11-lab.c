#include <stdio.h>
#include <math.h>

int main() {
    int base, power;
    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);
    
    int result = pow(base, power);
    printf("%d raised to power %d: %d\n", base, power, result);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
