#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, i;
	printf("��J�Ĥ@�Ӽ�:");
	scanf("%d", &a);
	printf("��J�ĤG�Ӽ�:");
	scanf("%d", &b);
	for (i = 1; i <= a * b; i++)
	{
		if ((i % a == 0) && (i % b == 0))
		{
			printf("%d�O�̤p������", i);
			break;
		}
	}
    system("pause");
	return 0;
}