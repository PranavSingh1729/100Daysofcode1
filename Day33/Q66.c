#include <stdio.h>

int main() {
    int arr[100], n, x, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    // Find position to insert
    pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > x) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = x;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}