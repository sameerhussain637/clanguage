#include<stdio.h>
void div();
void multi();
int main(){
    div();
    multi();
}
void div(){
    int a =4;
    float b = 2.2;
float c ;
c = b/a;
printf("%f\n",c);
}

void multi(){
    int a=2;
    float b=2.2;
float c ;
c = b*a;
printf("%f",c);
}