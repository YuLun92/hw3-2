#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, i;
	printf("輸入第一個數:");
	scanf("%d", &a);
	printf("輸入第二個數:");
	scanf("%d", &b);
	for (i = 1; i <= a * b; i++)
	{
		if ((i % a == 0) && (i % b == 0))
		{
			printf("%d是最小公倍數", i);
			break;
		}
	}
    system("pause");
	return 0;
}