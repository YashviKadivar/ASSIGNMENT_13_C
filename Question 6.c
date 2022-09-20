/* Write a recursive function to calculate factorial of a given number  */

#include<stdio.h>

int fact=1;

int factorial(int);

int main()
{
    int n;

    printf("\n enter a value->");
    scanf("%d",&n);

    printf("%d",factorial(n));

    return 0;
}

int factorial(int x)
{
    if(x==0)
        return 1;

    return (x)*factorial(x-1);
}

