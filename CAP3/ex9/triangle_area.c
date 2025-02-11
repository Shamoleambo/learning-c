#include <stdio.h>

int main() {
	float base, high, area;

	printf("Provide the triangle's base: ");
	scanf("%f", &base);
	printf("Provide the triangle's high: ");
	scanf("%f", &high);
	
	area = (base*high)*0.5;

	printf("The triangle's area is: %.2f\n", area);
	return 0;
}
