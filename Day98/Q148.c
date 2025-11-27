//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to compare structures
int compareStudents(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks)
        return 1; // identical
    else
        return 0; // not identical
}

int main() {
    struct Student a, b;

    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", a.name);
    printf("Roll no: ");
    scanf("%d", &a.roll_no);
    printf("Marks: ");
    scanf("%f", &a.marks);

    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", b.name);
    printf("Roll no: ");
    scanf("%d", &b.roll_no);
    printf("Marks: ");
    scanf("%f", &b.marks);

    if (compareStudents(a, b))
        printf("\nThe two students are IDENTICAL.\n");
    else
        printf("\nThe two students are DIFFERENT.\n");

    return 0;
}
