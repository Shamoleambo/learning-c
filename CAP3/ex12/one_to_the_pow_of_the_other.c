#include <stdio.h>
#include <math.h>

int main () {
	float n, e, result;

	printf("Provide the number: ");
	scanf("%f", &n);
	printf("Provide the exponent: ");
	scanf("%f", &e);

	result = pow(n, e);

	printf("%.2f to the power of %.2f is: %.2f\n", n, e, result);
	return 0;
}

