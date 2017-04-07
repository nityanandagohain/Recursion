//Author Nityananda Gohain
//This program only displays the reversed number,you cannot use the reversed number

#include<stdio.h>
void rev(int);
main()
{
    int x;
    scanf("%d",&x);
    rev(x);
}
void rev(int x)
{
    if(x>0)
    {
        printf("%d",x%10);
        rev(x/10);
    }
}
