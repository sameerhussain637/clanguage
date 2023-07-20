#include<stdio.h>
int main(){
    int a ,temp,rem,sum=0 ;
    printf("enter your number = ");
    scanf("%d",&a);
    temp = a;
    while(a>0){
        rem = a%10;
        sum = sum*10+rem;
        a = a/10;
    }
        if(temp == sum){
            printf("it is palendrome number");
        }
        else{
            printf("not palendrom");
        }
}