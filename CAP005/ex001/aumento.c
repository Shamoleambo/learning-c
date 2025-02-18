#include <stdio.h>

int main() {
	float salario = 1000, aumento = 0.015, salario_atual;

	salario_atual = salario;
	for(int i = 2006; i <= 2025; i++) {
		salario_atual *= (1 + aumento);
		printf("Percentual de aumento: %.8f", aumento);
		aumento *= 2;
		printf("salario em %d: R$%.2f\n", i, salario_atual);
	}
	printf("\nSALÁRIO 2025: R$%.2f\n", salario_atual)
	return 0;
}
