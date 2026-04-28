#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;
    char c = 'A';
    
    int *pi = &i;
    float *pf = &f;
    char *pc = &c;
    
    printf("Size of pointer to int: %lu bytes\n", sizeof(pi));
    printf("Size of pointer to float: %lu bytes\n", sizeof(pf));
    printf("Size of pointer to char: %lu bytes\n", sizeof(pc));
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
