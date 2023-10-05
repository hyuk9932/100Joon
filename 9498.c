#include<stdio.h>
int main() 
{
	double a;
	scanf_s("%lf", &a);
	if (0 <= a && a<= 100)
	{
		if (a >= 90)
		{
			printf("A");
		}
		else if (a >= 80)
		{
			printf("B");
		}
		else if (a >= 70)
		{
			printf("C");
		}
		else if (a >= 60)
		{
			printf("D");
		}
		else
		{
			printf("F");
		}
	}
	else
	{
		printf("점수 다시 적어요");
	}
	return 0;
}