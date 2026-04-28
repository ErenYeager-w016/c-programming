#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    int marks[n];
    printf("Enter marks: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &marks[i]);
    
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (marks[i] < marks[j]) {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
    
    printf("Top 5 marks: ");
    for (int i = 0; i < (n < 5 ? n : 5); i++)
        printf("%d ", marks[i]);
    printf("\n\nProgrammed by Kshitij Nepali\n");
    return 0;
}
