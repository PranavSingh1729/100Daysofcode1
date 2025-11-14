//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int num, count = 0;
    long long sum = 0;   // long long in case of large values

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'!\n", filename);
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(fp);

    // Check if any numbers were read
    if (count == 0) {
        printf("No numbers found in the file!\n");
        return 0;
    }

    // Compute average
    double average = (double)sum / count;

    // Display results
    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
