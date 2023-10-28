#include <stdio.h>


int main()
{
	int a, b, c, r1, r2, r3, r4, r5, l;
	scanf("%d %d %d", &a, &b, &c);
	r1=a+b*c;
	r2=a*(b+c);
	r3=a*b*c;
	r4=(a+b)*c;
	r5=a+b+c;
	l=r1;
	if(r2>l)
	{
	    l=r2;
	}
	if(r3>l)
	{
	    l=r3;
	}
	if(r4>l)
	{
	    l=r4;
	}
	if(r5>l)
	{
	    l=r5;
	}
	printf("%d", l);

	return 0;
}
