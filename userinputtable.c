#include <stdio.h>

int main() {
    int num;
    int i = 1;
    printf("enter the value =");
    scanf("%d",&num);
    while (i <= 10) {
        printf("%d*%d=%d\n", num, i, num * i);
        i++;
    }

    return 0;
}
