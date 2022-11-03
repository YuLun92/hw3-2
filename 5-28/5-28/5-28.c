#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	printf("請輸入一個大寫字母:");
	scanf("%c", &a);

	a = a + 32;
	printf("小寫字母為:%c\n", a);


	system("pause");
	return 0;
}