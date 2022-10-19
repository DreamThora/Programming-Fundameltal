#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a < 0) printf("Please insert the number that is greater or equal zero");
	else {
		if (a >= 50)printf("Pass");
		else printf("Fail");
	}
}