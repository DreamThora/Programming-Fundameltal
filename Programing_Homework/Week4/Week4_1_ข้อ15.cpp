#include <stdio.h>
int main()
{
	int a, b, c = 0;
	scanf_s("%d%d", &a, &b);
	c = a + b;
	if (c > 0) {
		if (c % 2 == 0) printf("Positive Even");
		else printf("Positive Odd");
	}
	else if (c < 0) {
		if (c % 2 == 0) printf("Negative Even");
		else printf("Negative Odd");
	}
	else printf("Zero");
}