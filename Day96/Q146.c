//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joinDate;   // Nested structure
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joinDate.day, &emp.joinDate.month, &emp.joinDate.year);

    // Display details
    printf("\n--- Employee Details ---\n");
    printf("Name          : %s\n", emp.name);
    printf("ID            : %d\n", emp.id);
    printf("Salary        : %.2f\n", emp.salary);
    printf("Joining Date  : %02d-%02d-%04d\n",
           emp.joinDate.day, emp.joinDate.month, emp.joinDate.year);

    return 0;
}
