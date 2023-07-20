#include <stdio.h>
int main() {
    float heightCm, heightM;

    printf("Enter the height in centimeters: ");
    scanf("%f", &heightCm);

    
    heightM = heightCm / 100;

    if (heightM < 1.6) {
        printf("Low height\n");
    } else if (heightM >= 1.6 && heightM < 1.8) {
        printf("Mid height\n");
    } else {
        printf("High height\n");
    }

    return 0;
}

 

