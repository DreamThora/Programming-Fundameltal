#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	scanf_s("%lf%lf", &a, &b);
	a *= a;
	b *= b;
	c = sqrt(a + b);
	printf("%lf", c);
}