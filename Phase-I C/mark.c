#include<stdio.h>
void grade(int mark)
{
    if(mark>71)
    {
        if(mark>=81)
        {
            if(mark>=91)
            {
                printf("Grade A\n");
            }
            else
            {
                printf("Grade B\n");
            }
        }
        else
        {
            printf("Grade C\n");
        }
    }
    else
    {
        printf("Grade F\n");
    }
    
}
int main()
{
    printf("Enter your mark: ");
    int mark;
    scanf("%d",&mark);
    grade(mark);
    return 0;
}
