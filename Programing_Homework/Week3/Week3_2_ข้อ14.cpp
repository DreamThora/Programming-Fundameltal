#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	c = a + b;
	if (c > 0) printf("a + b > 0");
	else if (c == 0) printf("a + b = 0");
	else printf("a + b < 0");
}