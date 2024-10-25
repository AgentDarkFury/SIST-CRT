#include<stdio.h>
void reverse(int a)
{
    char x[3];
    sprintf(x,"%d",a);
    for(int i=3;i>0;i--){
        printf("%s",x[i]);
    }
}
int main()
{
    reverse(423);
    return 0;
}