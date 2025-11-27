//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that takes structure as parameter
void printStudent(struct Student st) {
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", st.name);
    printf("Roll No   : %d\n", st.roll_no);
    printf("Marks     : %.2f\n", st.marks);
}

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Function call with structure argument
    printStudent(s);

    return 0;
}
