#include<stdio.h>
int main()
{
    int a = 10;
    //printf("%d %d %d\n",a++, a, a--);
    //printf("%d\n",a++ + a + a--);
    a = a++ + a + a--;
    printf("%d\n",a);
}