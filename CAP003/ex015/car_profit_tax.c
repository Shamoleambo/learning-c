#include <stdio.h>

int main(){
	float production_cost, profit_margin, taxes, amount_profit, amount_taxes, value;

	printf("What is the production cost? ");
	scanf("%f", &production_cost);
	printf("What is the profit margin? ");
	scanf("%f", &profit_margin);
	printf("What are the rate of the taxes? ");
	scanf("%f", &taxes);

	amount_profit = production_cost * (profit_margin / 100);
	amount_taxes = production_cost * (taxes / 100);
	value = production_cost + amount_profit + amount_taxes;

	printf("Manufacturer profit: $%.2f\n", amount_profit);
	printf("Taxes: $%.2f\n", amount_taxes);
	printf("Value: $%.2f\n", value);

	return 0;
}
