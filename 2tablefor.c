#include<stdio.h>
int main(){
    int i;
    int j=10;
    for(i=2;i<=j;i++){
        if(i%2==0){
            printf("%d * %d =%d",i,j );
        }
    }
}