/* Write a recursive function to calculate sum of digits of a given number  */

#include<stdio.h>

int sum=0;

int sum_digit(int);

int main()
{
    int n;

    printf("\n enter a value->");
    scanf("%d",&n);

    printf("%d",sum_digit(n));

    return 0;
}

int sum_digit(int x)
{
    if(x==0)
        return sum;

    sum+=x%10;

    return sum_digit(x/=10);
}
