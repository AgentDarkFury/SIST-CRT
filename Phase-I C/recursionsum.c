#include<stdio.h>
int sum(int a, int pop)
{
    if (pop==0)
    {
        return a;
    }
    int temp = pop%10;
    pop = pop/10;
    a+=temp;
    sum(a,pop);

}
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    printf("%d\n",sum(0,num));
}
