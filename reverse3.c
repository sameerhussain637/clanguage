#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=3;i++){
        for(int j=3;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}