#include <stdio.h>

int main() {
	float min_wage, h_trab, h_ext, valor_h, salario_mes, salario_bruto, imp_renda, salario_liq, grat, salario;
	int deps;

	printf("Forneça o salário mínimo: ");
	scanf("%f", &min_wage);
	printf("Forneça o número de horas trabalhadas: ");
	scanf("%f", &h_trab);
	printf("Forneça o número de dependentes: ");
	scanf("%d", &deps);
	printf("Forneça a qtde de horas extras trabalhadas: ");
	scanf("%f", &h_ext);

	valor_h = 0.2 * min_wage;
	salario_mes = h_trab * valor_h;
	salario_bruto = salario_mes + 32 * deps + h_ext * (valor_h * 1.5);

	printf("\n\nValor da hora: R$%.2f\n", valor_h);
	printf("Salário do mês: R$%.2f\n", salario_mes);
	printf("Salário Bruto: R$%.2f\n", salario_bruto);

	if(salario_bruto < 200) {
		imp_renda = 0;
	} else if(salario_bruto >= 200 && salario_bruto < 500) {
		imp_renda = 0.1 * salario_bruto;
	} else {
		imp_renda = 0.2 * salario_bruto;
	}

	salario_liq = salario_bruto - imp_renda;

	if(salario_liq < 350) {
		grat = 100;
	} else {
		grat = 50;
	}

	salario = salario_liq + grat;

	printf("\n\nImposto de renda retido na fonte: R$%.2f\n", imp_renda);
	printf("Salário líquido: R$%.2f\n", salario_liq);
	printf("Gratificação: R$%.2f\n", grat);
	printf("\n==> SALÁRIO: R$%.2f <===\n", salario);
	return 0;
}
