//Define a struct with enum Gender and print person's gender..
#include <stdio.h>

enum Gender { MALE = 1, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender:\n");
    printf("1. MALE\n");
    printf("2. FEMALE\n");
    printf("3. OTHER\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    p.gender = choice;  // assign chosen gender to struct

    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);

    printf("Gender: ");
    switch (p.gender) {
        case MALE:   printf("Male\n");   break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n");  break;
        default:     printf("Invalid Gender\n");
    }

    return 0;
}
