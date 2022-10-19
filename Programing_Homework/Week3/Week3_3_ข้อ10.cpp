#include <stdio.h>
int main()
{
	double a;
	scanf_s("%lf", &a);
	if (a >= 0) printf("THB = %.2lf", a * 32.5);
	else printf("You don't have money");
}