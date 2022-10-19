#include<stdio.h>
int main()
{
	int a[2][100][100];
	int m = 0, n = 0;
	scanf_s("%d %d", &m, &n);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				scanf_s("%d", &a[i][j][k]);
			}
		}
		printf("\n");
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[0][i][j] + a[1][i][j]);
		}
		printf("\n");
	}

}