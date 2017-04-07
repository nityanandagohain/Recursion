#include<stdio.h>
long pal(long x);
main()
{
    long x;
    scanf("%ld",&x);
    if(x==pal(x))
        printf("palindrome");
    else
        printf("not palindrome");
}
long pal(long x)
{
    static long p=0;
    if(x<=0)
        return 0;
    p=p*10+x%10;
    pal(x/10);
    return p;
}
