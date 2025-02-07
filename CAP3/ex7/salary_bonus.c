#include <stdio.h>

int main() {
	float base_salary, salary;

	printf("Enter the employee's base salary: ");
	scanf("%f", &base_salary);

	salary = base_salary + 50 - base_salary*.1;

	printf("The employee's salary is: $%.2f\n", salary);
	return 0;
}
