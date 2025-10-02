#include <stdio.h>
int main() {
    int a[20], i, n, j, small, index, temp;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array before sort: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Selection sort
    for (i = 0; i < n - 1; i++) {
        small = a[i];
        index = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < small) {
                small = a[j];
                index = j;
            }
        }

        // Swap a[i] and a[index]
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }

    printf("\nArray after sort: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
