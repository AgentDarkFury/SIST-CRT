#include<stdio.h>
//Swap the elements of an array using pointers
void caller();
void swapper(int *a, int *b);
 int main ()
 {
    caller();
 }
void caller()
{
    int a = 10, b = 20;
    swapper(&a,&b);
    printf("%d %d", a, b);

}
 void swapper(int *a, int *b)
 {
    int temp = *a;
    *a = *b;
    *b = temp;
 }