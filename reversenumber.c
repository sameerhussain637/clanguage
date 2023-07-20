#include<stdio.h>
int main(){
    int a;
    printf("enter your number = ");
    scanf("%d",&a);
    int rem,sum=0;
    while(a>0){
        rem = a%10;
        sum = sum*10+rem;
        a = a/10;
    }
        printf("the reverse of a number is = %d",sum);
}