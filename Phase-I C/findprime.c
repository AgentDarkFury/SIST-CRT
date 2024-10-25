#include<stdio.h>
int checkprime(int);
void primecaller(int);

int main()
{
    int num,count;
    printf("Enter the number: ");
    scanf("%d",&num);
    primecaller(num);
}

void primecaller(int num)
{
    for(int i=1;i<=num;i++)
    {
        if(checkprime(i)==1)
        {
            printf("%d is prime\n",i);
        }
        else
        {
            printf("%d is not prime\n",i);
        }
    }
}

int checkprime(int num)
{
    if (num<=1) return 0;
    for(int i = 2;i*i<=num;i++)
    {   
        if (num%i==0) return 0;
    }
    return 1;
}