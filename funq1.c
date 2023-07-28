// no return and argument

#include<stdio.h>

void add();

int main (){

add();
}

void add(){
    int a=1,b=2;
    int c ;
    c= a+b;
    printf("%d",c);
}