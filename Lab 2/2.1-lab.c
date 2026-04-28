#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    int a = 0, b = 1;
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
    
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
