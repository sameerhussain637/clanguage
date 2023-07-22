#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer number= ");
    scanf("%d", &num);
    
    int count = 0;
    int temp = num;
    
    if (temp == 0) {
        count = 1; 
    } else {
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }
    printf("Number of digits in %d is: %d\n", num, count);

    return 0;
}