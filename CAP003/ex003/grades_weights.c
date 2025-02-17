#include <stdio.h>

int main () {
	float g1, g2, g3, average;
	int w1, w2, w3;

	printf("Enter the first grade: ");
	scanf("%f", &g1);
	printf("Enter the weight of the first grade: ");
	scanf("%d", &w1);

	printf("Enter the second grade: ");
	scanf("%f", &g2);
	printf("Enter the weight of the second grade: ");
	scanf("%d", &w2);

	printf("Enter the third grade: ");
	scanf("%f", &g3);
	printf("Enter the weight of the third grade: ");
	scanf("%d", &w3);

	average = (g1*w1 + g2*w2 + g3*w3)/(w1+w2+w3);

	printf("The average of the %6.3f, %6.3f and %6.3f is: %6.3f\n", g1, g2, g3, average);

	return 0;
}
