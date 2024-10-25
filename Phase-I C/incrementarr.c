#include<stdio.h>
void caller();
void increment();
void caller()
{
    int arr[5]={1,2,3,4,5};
    increment(arr);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d\n",arr[i]);
    }
}

void increment(int arr[]){
    for(int i=0;i<5;i++)
    {   
        arr[i]+=1;
        //printf("%d",arr[i]);
    }
}

int main(){
    caller();
}