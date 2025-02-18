#include <stdio.h>

int main() {
	int qtd_vendas[10];
	float preco_vendas[10];

	for(int i = 0; i < 10; i++) {
		printf("Forneça a quantidade vendida na posição %d: ", i);
		scanf("%d", &qtd_vendas[i]);
		printf("Forneça o preço da venda na posição %d: ", i);
		scanf("%f", &preco_vendas[i]);
	}

	for(int i = 0; i < 10; i++){
		float valor_total = qtd_vendas[i] * preco_vendas[i];
		printf("Objeto %d:\n--Preço unitário: R$%.2f\n--Quantidade vendida: %d\n--Valor Total da Venda: R$%.2f\n\n", i+1, preco_vendas[i], qtd_vendas[i], valor_total);
	}

	return 0;
}
