#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	printf("�п�J�@�Ӥj�g�r��:");
	scanf("%c", &a);

	a = a + 32;
	printf("�p�g�r����:%c\n", a);


	system("pause");
	return 0;
}