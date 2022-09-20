/* write a program in c to calculate the power of any number using recursion.   */

int power(int,int);

int main()
{
    int a,b;

    printf("\n enter 2 value->");
    scanf("%d%d",&a,&b);

    printf("%d",power(a,b));

    return 0;
}

int power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }

    return (x) * power(x,y-=1);
}


