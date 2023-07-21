#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a % 2 != 0)
    {
        a++;
    }
    printf("Even numbers between %d and %d: ", a, b);
    int i = a;
    while (i <= b)
    {
        printf("%d \n", i);
        i += 2;
    }
    printf("\n");
    return 0;
}