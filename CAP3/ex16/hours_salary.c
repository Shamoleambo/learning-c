#include <stdio.h>

int main () {
	float hours, hour_value, minimum_wage, raw_salary, salary;

	printf("Provide the amount of hours worked: ");
	scanf("%f", &hours);
	printf("Provide the minimum wage: ");
	scanf("%f", &minimum_wage);

	hour_value = minimum_wage / 2;
	raw_salary = hours * hour_value;
	salary = raw_salary * .97;

	printf("The salary for %.1f hours, when the minimum wage is $%.2f, is: $%.2f\n", hours, minimum_wage, salary);
	return 0;
}
