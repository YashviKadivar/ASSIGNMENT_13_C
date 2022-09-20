/* Write a recursive function to calculate sum of first N odd natural numbers   */

#include<stdio.h>

int sum=0;

int sum_odd(int);

int main()
{
    int n;

    printf("\n Enter a value->");
    scanf("%d",&n);

    printf("\n %d",sum_odd(n));

    return 0;
}

int sum_odd(int x)
{
    if(x==1)
        return 1*2-1;
    return(x*2-1) + sum_odd(x-1);
}


