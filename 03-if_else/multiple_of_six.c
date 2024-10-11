#include <stdio.h>

int main() {
	int num;

	printf("Choose a number: ");
	scanf("%d", &num);

	if(num%2 ==0 & num%3==0) {
		printf("The number %d is multiple of 6\n", num);
	} else {
		printf("The number %d is not a multiple of 6\n", num);
	}

	return 0;
}
