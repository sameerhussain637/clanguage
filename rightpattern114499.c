#include <stdio.h>

int main() {
    int num = 3; 

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1) {
                printf("1");
            } else if (i == 2) {
                printf("4");
            } else if (i == 3) {
                printf("9");
            }
        }
        printf("\n");
    }

    return 0;
}