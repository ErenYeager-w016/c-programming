#include <stdio.h>

int main() {
    char c = 'A';
    float f = 3.14;
    int i = 100;
    
    printf("Memory addresses:\n");
    printf("char variable: %p\n", (void*)&c);
    printf("float variable: %p\n", (void*)&f);
    printf("int variable: %p\n", (void*)&i);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
