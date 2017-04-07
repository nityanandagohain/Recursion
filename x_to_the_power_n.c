
#include<stdio.h>
long powr(int ,int );//prototype of the function
main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    printf("%d to the power %d is %ld",x,n,powr(x,n));
}
long powr(int x,int n)
{
    if(n<=1)
        return x;
    return x*powr(x,--n);
}
