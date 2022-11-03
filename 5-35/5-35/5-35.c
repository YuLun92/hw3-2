#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int Fabonacci(unsigned int n);

int main()
{
	unsigned int n;
	printf("請輸入 n:");
	scanf_s("%u", &n);
	printf("第%u個費伯納西數是:%u\n", n, Fabonacci(n));
	system("pause");
	return 0;
}

unsigned long long int Fabonacci(unsigned int n)
{
	unsigned int i;
	unsigned long long int ans[100000];
	ans[0] = 0, ans[1] = 1;
	for (i = 2; i <= n; i++)
	{
		ans[i] = ans[i - 1] + ans[i - 2];
		if (ans[i] < ans[i - 1])
		{
			break;
		}
	}
	return ans[n - 1];
}