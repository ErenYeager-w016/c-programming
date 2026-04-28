#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    
    int *age = (int*)malloc(n * sizeof(int));
    
    printf("Enter age of %d employees: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &age[i]);
    
    int count = 0;
    for (int i = 0; i < n; i++)
        if (age[i] > 80)
            count++;
    
    printf("Employees with age > 80: %d\n", count);
    printf("\nProgrammed by Kshitij Nepali\n");
    
    free(age);
    return 0;
}
