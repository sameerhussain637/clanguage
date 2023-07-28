#include<stdio.h>
int add();
int main(){
    add();
    return 0;
}
int add(){
    int a=1,b=2,c;
    c=a+b;
    printf("%d",c);
    return c;
}