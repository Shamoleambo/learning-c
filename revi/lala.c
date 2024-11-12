#include <stdio.h>

void switchAround(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main() {
	int num1, num2;

	printf("Provide the first number: ");
	scanf("%d", &num1);

	printf("Provide the second number: ");
	scanf("%d", &num2);

	printf("The first number before the switch: %d\n", num1);
	printf("The second number before the switch: %d\n", num2);

	switchAround(&num1, &num2);

	printf("\n\nThe first number after the switch: %d\n", num1);
	printf("The second number after the switch: %d\n", num2);

	
	return 0;
}
