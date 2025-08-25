// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &totalSeconds) != 1 || totalSeconds < 0) {
        printf("Invalid input\n");
        
    }

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;


    printf("Converted time: %d,%d,%d\n", hours, minutes, seconds);

    return 0;
}
