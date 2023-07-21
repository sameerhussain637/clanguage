#include <stdio.h>

int main() {
    int i = 100;

    printf("Even numbers from 1 to 100:\n");

    while (i >= 1) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i--;
    }

    return 0;
}
