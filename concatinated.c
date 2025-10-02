#include <stdio.h>

int main() {
    int i = 0, j = 0;
    char s1[150], s2[150];

    printf("string1: ");
    scanf("%s", s1);

    printf("string2: ");
    scanf("%s", s2);

    // Find the end of s1
    while (s1[i] != '\0') {
        i++;
    }

    // Append s2 to s1
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    // Null-terminate the result
    s1[i] = '\0';

    printf("concatenated string = %s\n", s1);
    return 0;
}
