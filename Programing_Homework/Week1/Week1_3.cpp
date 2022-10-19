#include <stdio.h>
int main()
{
	int a = 0;
	printf("Input your number(Odd Vs Even)=");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}