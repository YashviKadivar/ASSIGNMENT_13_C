/* Write a recursive function to calculate sum of first N even natural numbers   */

#include<stdio.h>

int sum=0;

int sum_even(int);

int main()
{
    int n;

    printf("\n Enter a value->");
    scanf("%d",&n);

    printf("\n %d",sum_even(n));

    return 0;
}

int sum_even(int x)
{
    if(x==1)
        return 1*2;
    return(x*2) + sum_even(x-1);
}



