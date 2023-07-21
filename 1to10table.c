#include <stdio.h>

int main() {
    int a = 2;
    int b = 10;
    int i = a;
    int j;

    printf("Multiplication tables from %d to %d:\n", a, b);

    while (i <= b) {
        printf("Table of %d:\n", i);
        j = 1;
        while (j <= 10) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
