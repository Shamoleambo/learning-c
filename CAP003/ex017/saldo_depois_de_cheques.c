#include <stdio.h>

int main (){
	float salario, cheque1, cheque2, saldo;

	printf("Salraio: ");
	scanf("%f", &salario);
	printf("Primeiro cheque: ");
	scanf("%f", &cheque1);
	printf("Segundo cheque: ");
	scanf("%f", &cheque2);

	saldo = salario - cheque1 * 1.0038 - cheque2 * 1.0038;
	printf("O saldo na conta é de: R$%.2f\n", saldo);
	return 0;
}
