#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0], second_largest = -2147483648;
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if(n < 2 || second_largest == -2147483648)
        printf("No second largest element.\n");
    else
        printf("Second largest element: %d\n", second_largest);

    return 0;
}