#include<stdio.h>
int main(){
    int num = 153,rem,sum=0;
    int temp;
    temp = num;
    while (num>0)
    {
        rem = num%10;
        sum = sum+rem*rem*rem;
        num /= 10; 
    }
    if(temp == sum){
        printf("it is a armstrong");
    }
    else{
        printf("it is not");
    }
    
}