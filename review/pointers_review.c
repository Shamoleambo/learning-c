#include <stdio.h>

void swapNumbers(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int main () {
	int num1, num2;

	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);

	printf("Before the swap: num1 = %d \\ num2 = %d\n", num1, num2);
	
	swapNumbers(&num1, &num2);
	printf("After the swap: num1 = %d \\ num2 = %d\n", num1, num2);
	return 0;
}
