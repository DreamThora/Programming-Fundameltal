#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a > 0) printf("> 0");
	else if (a == 0) printf("= 0");
	else printf("< 0");
	return 0;
}