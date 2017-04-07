#include<stdio.h>
int prime(int,int);
main()
{
    int x;
    scanf("%d",&x);
    if(prime(x,x/2)==1)
        printf("prime");
    else
        printf("Not prime");
}
int prime(int a,int x)
{
    static int f=1;
    if(x>1)
    {
        if(a%x==0)
            f=-1;
        prime(a,x-1);
    }
    return f;
}
