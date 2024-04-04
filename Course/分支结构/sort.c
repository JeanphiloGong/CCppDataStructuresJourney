#include<stdio.h>

int main()
{
	double a, b, c, t;
	scanf ("%lf%lf%lf", &a, &b, &c);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
		{
			t=a;
			a=c;
			c=t;
		}
	if(b>c)
	{
		t=b;
		b=a;
		a=t;
	}

	printf("%0.2lf %0.2lf %0.2lf\n", a, b, c);

	return 0;
}

