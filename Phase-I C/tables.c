#include<stdio.h>
int calc(int a){
    for(int i=2;i<10;i++)
    {
        if(i==5){
            continue;
        }
        printf("%d x %d = %d\n",a,i,a*i);
    }
}

void main()
{
    calc(4);
}