#include <stdio.h>

int main(){
	float salario_minimo, qtde_qw, custo_qw, custo_residencia, custo_res_desc;

	printf("Forneça o valor do salário mínimo: ");
	scanf("%f", &salario_minimo);
	printf("Forneça a quantidade de quilowatts consumida: ");
	scanf("%f", &qtde_qw);

	custo_qw = salario_minimo / 5;
	custo_residencia = custo_qw * qtde_qw;
	custo_res_desc = custo_residencia * 0.85;

	printf("\n\nO custo de cada quilowatt é: R$%.2f/kw\n", custo_qw);
	printf("O valor a ser pago pela residência é: R$%.2f\n", custo_residencia);
	printf("O valor a ser pago pela residência com 15%% de desconto é: R$%.2f\n\n", custo_res_desc);
	return 0;
}
