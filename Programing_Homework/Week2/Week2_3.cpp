#include<stdio.h>
int main()
{
	float a;
	scanf_s("%f", &a);
	if (a >= 32) {
		a -= 32;
		a *= 5;
		a /= 9;
		printf("%.2f", a);
	}
	else printf("Too cold to live");
}