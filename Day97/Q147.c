//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp[3], temp;
    FILE *fp;
    int i;

    // Input employee records
    printf("Enter details of 3 employees:\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    
    fp = fopen("employees.dat", "wb"); // binary write
    if (fp == NULL) {
        printf("File could not be opened!\n");
        return 0;
    }

    fwrite(emp, sizeof(struct Employee), 3, fp);
    fclose(fp);
    printf("\nData written to binary file successfully!\n");

   
    fp = fopen("employees.dat", "rb"); // binary read
    if (fp == NULL) {
        printf("File could not be opened!\n");
        return 0;
    }

    printf("\n--- Reading Employee Records from File ---\n");
    for (i = 0; i < 3; i++) {
        fread(&temp, sizeof(struct Employee), 1, fp);
        printf("\nEmployee %d\n", i + 1);
        printf("Name   : %s\n", temp.name);
        printf("ID     : %d\n", temp.id);
        printf("Salary : %.2f\n", temp.salary);
    }

    fclose(fp);
    return 0;
}
