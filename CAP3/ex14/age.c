#include <stdio.h>

int main () {
	int birth, current, age, future_age;

	printf("In what year you were born? ");
	scanf("%d", &birth);
	printf("What is the current year? ");
	scanf("%d", &current);

	age = current - birth;
	future_age = 2050 - birth;

	printf("Your age is: %d\n", age);
	printf("Your age in 2050 will be: %d\n", future_age);
	return 0;
}
