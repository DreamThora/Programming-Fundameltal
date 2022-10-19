#include <stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a >= 0) printf("%d", a + 543);
	else printf("Please insert number that is greater or equal zero");
}