#include <stdio.h>

int main() {
	int a, b;
	float div;
	scanf_s("%d %d", &a, &b);

	if (b != 0) {
		div = a / b;
		printf("%d\n", div);
	}
	else
	{
		printf("divider = 0 !!! \n");
	}
	
	system("pause");
	return 0;
}