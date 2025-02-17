#include <stdio.h>

int main() {
	int num1, num2, num3, num4, sum = 0;

	printf("Enter the first integer: ");
	scanf("%d", &num1);

	printf("Enter the second integer: ");
	scanf("%d", &num2);

	printf("Enter the third integer: ");
	scanf("%d", &num3);

	printf("Enter the fourth integer: ");
	scanf("%d", &num4);

	sum += num1 + num2 + num3 + num4;
	printf("%d + %d + %d + %d = %d\n", num1, num2, num3, num4, sum);

	return 0;
}
