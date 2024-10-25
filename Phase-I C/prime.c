#include<stdio.h>
#include<stdbool.h>
bool getprime(int num)
{   
    if(num<=1) return false;
    for(int i =2;i*i<-num;num++)
    {
        if (num%i==0) return false;
    }
    return true;
}
int main(){
    printf(getprime(7));
}