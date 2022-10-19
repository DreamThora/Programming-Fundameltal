#include <stdio.h>
int main()
{
	long a=0;
	printf("Input you integer : ");
	scanf("%ld",&a);
	for(int i=0;i<a;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
