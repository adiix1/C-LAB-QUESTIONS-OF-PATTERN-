#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int i, j, rows = 5;

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }

    return 0;
}