#include <stdio.h>

int main() {
    int m, n;
    printf("Enter matrix dimensions (m x n): ");
    scanf("%d %d", &m, &n);
    
    int a[m][n], b[m][n], sum[m][n];
    
    printf("Enter matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    printf("Enter matrix B:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    
    int *pa = (int*)a;
    int *pb = (int*)b;
    int *ps = (int*)sum;
    
    for (int i = 0; i < m * n; i++)
        *(ps + i) = *(pa + i) + *(pb + i);
    
    printf("Sum of matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
