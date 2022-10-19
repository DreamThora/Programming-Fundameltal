#include <stdio.h>
int main()
{
	int i, j, space1, space2, n, k1 = 0, k2 = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++, k1 = 0) { //tong k=0 duy 
		for (space1 = 1; space1 <= n - i; space1++, k1 = 0) {
			printf("  ");
		}
		while (k1 != 2 * i - 1) {
			printf("* ");
			k1++;
		}
		printf("\n");
	}
	for (j = 1; j < n; j++, k2 = 0) {
		for (space2 = 1; space2 <= j; space2++, k2 = 0) {
			printf("  ");
		}
		while (k2 != 2 * (n - j) - 1) {
			printf("* ");
			k2++;
		}
		printf("\n");
	}
}