/* Write a recursive function to calculate sum of first N natural numbers   */

#include<stdio.h>

int sum=0;

int sum_number(int);

int main()
{
        int a;

        printf("\n Enter a number->");
        scanf("%d",&a);

        printf("\n %d",sum_number(a));

        return 0;
}

int sum_number(int x)
{
        if(x==1)
        {
            return 1;
        }

        return(x) + sum_number(x-1);

}

