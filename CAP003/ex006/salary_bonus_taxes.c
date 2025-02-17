#include <stdio.h>

int main() {
	float base_salary, salary;

	printf("Enter the employee's base salary: ");
	scanf("%f", &base_salary);

	salary = base_salary + base_salary*0.05 - base_salary*0.07;
	printf("Salary after bonus and taxes: $%.2f\n", salary);
	return 0;
}
