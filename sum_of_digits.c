#include<stdio.h>
int sum_of_digits(int);
main()
{
    int x;
    scanf("%d",&x);
    printf("\nSum of the digits is %d",sum_of_digits(x));
}
int sum_of_digits(int a)
{
    if(a==0)
        return 0;
    return a%10+sum_of_digits(a/10);
}
