//Perform diagonal traversal of a matrix.
#include <stdio.h>

void diagonalTraversal(int mat[][100], int m, int n) {
    for (int d = 0; d < m + n - 1; d++) {
        int row = d < n ? 0 : d - n + 1;
        int col = d < n ? d : n - 1;
        while (row < m && col >= 0) {
            printf("%d ", mat[row][col]);
            row++;
            col--;
        }
    }
    printf("\n");
}

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int mat[100][100];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    printf("Diagonal traversal:\n");
    diagonalTraversal(mat, m, n);
    return 0;
}