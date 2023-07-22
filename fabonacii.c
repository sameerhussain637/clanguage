#include <stdio.h>

int main() {
    int n, i, num1 = 0, num2 = 1, nextNum;
    
    printf("Enter the number of terms= ");
    scanf("%d", &n);
    
    printf("Fibonacci Series here= ");
    
    for (i = 1; i <= n; ++i) {
        printf("%d, ", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
    
    return 0;
}