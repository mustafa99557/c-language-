#include <stdio.h>
int main() {
    int m, n, i, j;
    int first[10][10], second[10][10], sum[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    // Matrix addition
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("Resultant Matrix after Addition:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
