#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    char s[101];
    scanf("%s", s);

    int numbers[100];
    int count = 0;

    // Extract numbers from the input string
    for (int i = 0; i < strlen(s); i += 2) {
        numbers[count++] = s[i] - '0'; // Convert char to int
    }

    // Sort the numbers
    qsort(numbers, count, sizeof(int), cmpfunc);

    // Print the sorted numbers with '+' in between
    for (int i = 0; i < count; i++) {
        if (i > 0) printf("+");
        printf("%d", numbers[i]);
    }
    printf("\n");

    return 0;
}
