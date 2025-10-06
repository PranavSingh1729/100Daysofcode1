//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main() {
    int n, i, j;
    int matrix[MAX][MAX];
    bool distinct = true;

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Check if diagonal elements are distinct
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}