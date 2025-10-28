//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    int day, month, year;

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Split date into parts
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Print in new format
    printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
