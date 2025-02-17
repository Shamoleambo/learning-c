#include <stdio.h>

int main() {
	float saco, gato1, gato2, qtd_restante;

	printf("Quantidade de ração comprada (kg): ");
	scanf("%f", &saco);
	printf("Quantidade que o primeiro gato come (g): ");
	scanf("%f", &gato1);
	printf("Qujantidade que o segundo gato come (g): ");
	scanf("%f", &gato2);

	qtd_restante = saco * 1000 - 5 * (gato1 + gato2);
	printf("Após 5 dias restam: %fg de comida ou %.2fkg de comida\n", qtd_restante, qtd_restante / 1000);
	return 0;
}
