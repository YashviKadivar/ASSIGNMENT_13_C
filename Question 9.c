/* write a program in c to count the digits of a given number using recursion */

int c=0;

int count_num(int);

int main()
{
    int n;

    printf("\n enter a value->");
    scanf("%d",&n);

    printf("%d",count_num(n));

    return 0;
}

int count_num(int x)
{
    if(x==0)
    {
        return c;
    }
    c++;

    return count_num(x/=10);
}

