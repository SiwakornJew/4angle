#include<stdio.h>
int main()
{
	int num,i,j;
	scanf_s("%d", &num);
	for ( i = 1; i <= num; i++)
	{
		for ( j = 1; j <= num; j++)
		{
			if (i == 1 || i == num)
				printf("*");
			else if (j == 1)
				printf("*");
			else if (i > 1 && i < num && j < num)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}