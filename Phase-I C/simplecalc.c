#include<stdio.h>
void add();
void cal();
int main(){
    cal();
    return 0;
}
void cal(){
    int a=scanf("Enter number 1: ");
    int b = scanf("Enter number 2: ");
    add(a,b);
}
void add(int a, int b){
    printf("%d",a+b);
}