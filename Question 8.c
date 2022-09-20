/* Write a recursive function to print first N terms of Fibonacci series    */

#include<stdio.h>


int fibonacci(int n)
{
    if(n==0 || n==1)
        return n;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n,i;

    printf("\n Enter a Value->");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
        printf(" %d ",fibonacci(i));

    return 0;

}


