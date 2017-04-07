#include<stdio.h>
int gcd(int,int);
main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("The gcd of the numbers is %d",gcd(x,y));
}
int gcd(int x,int y)
{
    if(y==0)
        return x;
    gcd(y,x%y);
}
