#include<stdio.h>
    void add(int a, float b);

    int main(){
        add(1,2.2);
        return 0;
    }
void add(int a, float b){
    float c ;
    c = a+b;
    printf("%f",c);
}
