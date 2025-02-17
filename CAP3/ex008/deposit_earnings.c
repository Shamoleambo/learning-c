#include <stdio.h>

int main() {
	float deposit, interest_rate, yield, total;

	printf("Enter the deposit: ");
	scanf("%f", &deposit);

	printf("Enter the interest rate: ");
	scanf("%f", &interest_rate);

	yield = deposit * (interest_rate/100);
	total = deposit + yield;

	printf("Yield: $%.2f\n\n", yield);
	printf("Total: $%.2f\n\n", total);
	return 0;
}
