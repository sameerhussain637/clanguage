#include <stdio.h>

int main() {
    int n, i, num1 = 0, num2 = 1, nextNum;
    
    printf("Enter the number of terms= ");
    scanf("%d", &n);
        
    for (i = 1; i <= n; i++) {
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
        printf("%d, ", num1);
    }
}