/* Write a recursive function to calculate sum of squares of first n natural numbers    */

#include<stdio.h>

int sum_square(int);

int main()
{
    int n;

    printf("\n Enter a value->");
    scanf("%d",&n);

    printf("\n %d",sum_square(n));

    return 0;
}

int sum_square(int x)
{
    if(x==1)
        return 1;
    return(x*x) + sum_square(x-1);
}
