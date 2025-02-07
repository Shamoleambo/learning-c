#include <stdio.h>

int main() {
	float g1, g2, g3, sum, average;

	printf("Enter the first grade: ");
	scanf("%f", &g1);

	printf("Enter the second grade: ");
	scanf("%f", &g2);

	printf("Enter the third grade: ");
	scanf("%f", &g3);

	sum = g1 + g2 + g3;
	average = sum/3;
	printf("The average of %.2f, %.2f and %.2f is: %.2f\n", g1, g2, g3, average);
	return 0;
}
