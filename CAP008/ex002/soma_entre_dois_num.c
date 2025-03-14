#include <stdio.h>

int soma(int num1, int num2) {
	int firstNum, lastNum, soma_nums = 0;
	if(num1 < num2) {
		firstNum = num1;
		lastNum = num2;
	}else {
		firstNum = num2;
		lastNum = num1;
	}

	for(int i = firstNum + 1; i < lastNum; i++) {
		soma_nums += i;
	}

	return soma_nums;
}

int main () {
	int n1, n2;
	printf("Primeiro número: ");
	scanf("%d", &n1);
	printf("Segundo número: ");
	scanf("%d", &n2);
	int soma_nums = soma(n1, n2);
	printf("A soma dos números entre %d e %d é = %d\n", n1, n2, soma_nums);
	return 0;
}
