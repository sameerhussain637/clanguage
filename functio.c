#include<stdio.h>

int show(int a,int b);
int main(){
int result = show(2,4);
    printf("%d",result);
    return 0;
}
int show(int a,int b){
    int c=a+b;
    return c;
}                                                       