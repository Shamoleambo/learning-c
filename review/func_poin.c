#include <stdio.h>

int swapTwoNumbers(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
	return 0;
}

int main() {
	int num1, num2;

	printf("Provide the first number: ");
	scanf("%d", &num1);

	printf("Provide the second number: ");
	scanf("%d", &num2);

	printf("Numbers before the swap: num1 = %d / num2 = %d\n", num1, num2);

	swapTwoNumbers(&num1, &num2);

	printf("Numbers after the swap: num1 = %d / num2 = %d\n", num1, num2);
	return 0;
}
