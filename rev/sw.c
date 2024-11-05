#include <stdio.h>

void switchTwoNumbers(int *first, int *second) {
	int c = *first;
	*first = *second;
	*second = c;
}

int main () {
	int firstNumber, secondNumber;

	printf("Provide the first number: ");
	scanf("%d", &firstNumber);

	printf("Provide the second number: ");
	scanf("%d", &secondNumber);

	printf("\nBEFORE:\n firstNumber = %d, secondNumber = %d\n", firstNumber, secondNumber);

	switchTwoNumbers(&firstNumber, &secondNumber);
	printf("\n\nAFTER:\n firstNumber = %d, secondNumber = %d\n", firstNumber, secondNumber);
	return 0;
}
