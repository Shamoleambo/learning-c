#include <stdio.h>
#include <math.h>

int main(){
	float custo_espetaculo, preco_convite;
	int qtd_min_convite;

	printf("Forneça o custo do espetáculo: ");
	scanf("%f", &custo_espetaculo);
	printf("Forneça o preço do convite: ");
	scanf("%f", &preco_convite);

	qtd_min_convite = ceil(custo_espetaculo / preco_convite);

	printf("O mínimo de convites que devm ser vendidos é: %d\n", qtd_min_convite);
	return 0;
}
