#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    char address[100];
};

int main() {
    struct Person people[3];
    
    printf("Enter data for 3 people:\n");
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        printf("Enter Name Address: ");
        scanf("%49s %99s", people[i].name, people[i].address);
    }
    
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (strcmp(people[i].name, people[j].name) > 0) {
                struct Person temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
    
    printf("\nPeople in alphabetical order:\n");
    for (int i = 0; i < 3; i++)
        printf("Name: %s, Address: %s\n", people[i].name, people[i].address);
    
    printf("\nProgrammed by Kshitij Nepali\n");
    return 0;
}
