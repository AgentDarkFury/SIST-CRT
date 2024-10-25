#include<stdio.h>
void addressprinter(){
    int arr[5] = {1,2,3,4,5};
    //char arr[4]={"ABCD"};
    for (int i = 0; i<4; i++){
        //printf("%c is located at %p\n",arr[i],&arr[i]);
        printf("%d is located at %p\n", arr[i],&arr[i]);
    }
}

int main(){
    addressprinter();
}