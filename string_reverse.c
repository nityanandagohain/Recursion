#include<stdio.h>
void rev_str(void);
main()
{
    rev_str();
}
void rev_str(void)
{
    char c;
    if((c=getchar())!='\n')
        rev_str();
    putchar(c);
}
