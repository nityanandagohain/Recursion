#include <stdio.h>
#include <math.h>
int n;
char r;
float a,b,c;
double i1,i2,err;
void interval(void);
double function(double);
void iteration(void);
void roots(void);
int main()
{
	printf("Enter Values of a,b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("Enter error\n");
	scanf("%lf",&err);
	printf("Do you want to find root in a given interval (Y/N)\n");
	scanf("%c",&r);
	if(r=='Y'||r=='y')
	{
		printf("Enter the interval [x y]");
		scanf("%lf%lf",&i1,&i2);
		iteration();
		roots();
	}
	else if(r=='N'||r=='n')
	{
		interval();
		iteration();
		roots();
	}
	else
		printf("You have entered wrong choice\n");
	return 0;
}
double function(double x)
{
	return (a*x*x-b*x-b);
}
void interval(void)
{
	int i=1;
	double x,y;
	i1=0;
	x=function(0);
	while(1)
	{
		i2=i;
		y=function(i);
		if(x*y<0)
			break;
		i1=i2;
		x=y;
		i++;
	}
}
void iteration(void)
{
	n=(int)(log((i2-i1)/err)/log(2));
}
void roots(void)
{
	int i;
	double nc,val;
	for(i=0;i<n;i++)
	{
		nc=((i2+i2)/2);
		val=function(nc);
		if(val>0 && i2>0)
			i2=nc;
		else 
			i1=nc;
		printf("%d iteration value = %lf\n",i,nc);
	}
}
