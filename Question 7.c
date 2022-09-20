/* Write a recursive function to calculate HCF of two numbers   */

int HCF(int,int);

int main()
{
    int a,b;

    printf("\n enter 2 value->");
    scanf("%d%d",&a,&b);

    printf("%d",HCF(a,b));

    return 0;
}

int HCF(int x,int y)
{
    if(x%y==0)
        return y;

    return HCF(y,x%y);
}

