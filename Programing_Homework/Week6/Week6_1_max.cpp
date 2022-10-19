#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a >= b && a >= c) printf("MAX : %d", a);
	if (b >= a && b >= c) printf("MAX : %d", b);
	if (c >= a && c >= b) printf("MAX : %d", c);
}