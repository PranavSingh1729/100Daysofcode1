//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to return topper student structure
struct Student getTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];   // returning structure
}

int main() {
    int n = 5, i;
    struct Student students[n], topper;

    printf("Enter details of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    topper = getTopper(students, n);   // get returned structure

    printf("\n--- Top Scoring Student ---\n");
    printf("Name      : %s\n", topper.name);
    printf("Roll No   : %d\n", topper.roll_no);
    printf("Marks     : %.2f\n", topper.marks);

    return 0;
}
