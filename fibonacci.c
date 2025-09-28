#include <stdio.h>
       


int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d terms: ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
