//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s, *ptr;

    ptr = &s;   // pointer holds address of structure

    // Modify structure members using pointer and -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display structure values using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", ptr->name);
    printf("Roll No   : %d\n", ptr->roll_no);
    printf("Marks     : %.2f\n", ptr->marks);

    return 0;
}
