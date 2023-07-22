#include<stdio.h>
int main(){
    int i,j,num;
    printf("enter the value = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}