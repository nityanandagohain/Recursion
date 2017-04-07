#include<stdio.h>
long dec_bin(int);
main()
{
    int x;
    scanf("%d",&x);
    printf("%ld",dec_bin(x));
}
long dec_bin(int x)
{
   static int b=0;
    if(x==0)
        return 0;
    dec_bin(x/2);
    b=b*10+x%2;
    return b;
}
