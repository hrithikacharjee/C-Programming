#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,min,max;

    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    printf("Enter 3rd number :");
    scanf("%d",&c);
    if(a < b&& a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    if(a > b && a > c)
    {
        max = a;
    }
    else if ( b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("\nThe smallest number is : %d",min);
    if(min%2 == 0)
    {
        printf("\n The smallest number is even");
    }
    else
    {
        printf("\n The smallest number is odd");
    }
    printf("\nThe largest number is : %d",max);
    if(max%2 == 0)
    {
        printf("\n The largest number is even");
    }
    else
    {
        printf("\n The largest number is odd");
    }
    return 0;
}
