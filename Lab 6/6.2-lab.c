#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int *ptr = arr;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(ptr + i);
    
    printf("Sum of array elements: %d\n", sum);
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
