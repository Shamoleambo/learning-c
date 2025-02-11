#include <stdio.h>
#include <math.h>

int main() {
	float n, p2, p3, s, c;

	printf("Provide a number bigger than zero: ");
	scanf("%f", &n);

	p2 = pow(n, 2);
	p3 = pow(n, 3);
	s = sqrt(n);
	c = cbrt(n);

	printf("%.2f to the power of 2: %.2f\n", n, p2);
	printf("%.2f to the power of 3: %.2f\n", n, p3);
	printf("Square root of %.2f: %.2f\n", n, s);
	printf("Cube root of %.2f: %.2f\n", n, c);
	return 0;
}
