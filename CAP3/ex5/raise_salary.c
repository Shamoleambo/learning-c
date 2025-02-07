#include <stdio.h>

int main() {
	float salary, new_salary, raise_amount;

	printf("Enter the employee's salary: ");
	scanf("%f", &salary);
	printf("Enter the raise amount: ");
	scanf("%f", &raise_amount);

	new_salary = (raise_amount/100 +1)*salary;
	printf("The employee's new salary is: $%.2f\n", new_salary);
	return 0;
}
