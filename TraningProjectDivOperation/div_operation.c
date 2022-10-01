#include <stdio.h>

int main() {
	int a, b;
	float div;

	printf("input dividend and dividor: a b\n");
	scanf_s("%d %d", &a, &b);

	if (b != 0) {
		div = a / b;

		printf("%d / %d = %.2f\n",a, b, div);
	}

	else
	{

		printf("divider = 0 !!! \n");
	}
	
	system("pause");
	return 0;
}