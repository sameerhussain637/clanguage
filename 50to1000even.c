#include <stdio.h>

int main() {
    int i = 50;

    printf("Even numbers from 1 to 100:\n");

    while (i <= 1000) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
