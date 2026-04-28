#include <stdio.h>

int main() {
    int m, n;
    printf("Enter matrix dimensions (m x n): ");
    scanf("%d %d", &m, &n);
    
    int matrix[m][n], transpose[n][m];
    
    printf("Enter elements of %dx%d matrix:\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];
    
    printf("\nTranspose matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
