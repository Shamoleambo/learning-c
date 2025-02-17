#include <stdio.h>

int main() {
	float radius, area;

	printf("Provide the radius of the circle: ");
	scanf("%f", &radius);

	area = 3.14 * (radius * radius);
	printf("The circle's area is: %.f\n", area);
	return 0;
}
