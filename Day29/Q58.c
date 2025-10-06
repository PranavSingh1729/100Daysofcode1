// Find the maximum and minimum element in an array
#include <stdio.h>
#include <limits.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}