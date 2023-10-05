#include<stdio.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	if (1 <= a <= 4000)
	{
		if(a%4 == 0 || a % 100 != 0 && a % 400 == 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		printf("1부터 4000까지 적으세요");
	}



}