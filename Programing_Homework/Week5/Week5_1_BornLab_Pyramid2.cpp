#include <stdio.h>
int main()
{
	int a, space, k = 0;
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++, k = 0) {
		for (space = 1; space <= a - i; space++, k = 0) {
			printf("  ");
		}
		while (k != 2 * i - 1) {
			printf("* ");
			k++;
		}
		printf("\n");
	}
}