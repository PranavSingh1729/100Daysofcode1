//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *fp;
    int n;

    // Ask how many students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode to store student data
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing!\n");
        return 1;
    }

    // Write student records to file
    for (int i = 0; i < n; i++) {
        char name[50];
        int roll;
        float marks;

        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        // Write data to file
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nData successfully written to students.txt\n");

    // Reopen file in read mode
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");
    char name[50];
    int roll;
    float marks;

    // Read and display records
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %-10s | Roll No: %-5d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
