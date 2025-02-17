#include <stdio.h>

int main() {
	float salary, newSalary;
	
	printf("Enter the employee's salary: ");
	scanf("%f", &salary);

	newSalary = 1.25 * salary;
	printf("The new salary is: $%.2f\n", newSalary);
	return 0;
}
