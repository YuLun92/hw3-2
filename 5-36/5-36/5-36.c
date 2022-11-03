#include <stdio.h>
#include <stdlib.h>


int main() {
	int a;
	void example_1();

	printf("請輸入n:");
	scanf_s("%d", &a);
	example_1(a, 'A', 'B', 'C');

	system("pause");
	return 0;
}
void example_1(int a, char A, char B, char C) {
	if (a == 1) {

		printf("盤子從%c移到%c\n", A, C);

	}
	else {

		example_1(a - 1, A, C, B);
		printf("盤子從%c移到%c\n", A, C);
		example_1(a - 1, B, A, C);
	
	}
}
