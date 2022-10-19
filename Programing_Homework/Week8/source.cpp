#include<stdio.h>
int main()
{
	char a[100];
	int b = 0;
	scanf_s("%s", &a,100);
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			b++;
	}
	if (b > 0) printf("There is vowel");
	else printf("There is not vowel");
}