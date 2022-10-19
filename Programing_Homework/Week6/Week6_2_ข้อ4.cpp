#include<stdio.h>
int main()
{
	char c;
	scanf_s("%c", &c);
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') printf("There is vowel");
	else printf("There is no vowel");
}