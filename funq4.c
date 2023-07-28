#include<stdio.h>
void div(int a, float b);
void multi(int a , float b);
int main(){
    div(4,2);
    multi(4,2.2);
}
void div(int a ,float b){
float c ;
c = b/a;
printf("%f\n",c);
}

void multi(int a ,float b){
float c ;
c = b*a;
printf("%f",c);
}