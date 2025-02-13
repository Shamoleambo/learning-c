#include <stdio.h>

int main(){
	float med, polegadas, jardas, milhas;

	printf("Qual é a medida em pés?  ");
	scanf("%f", &med);

	polegadas = med * 12;
	jardas = med / 3;
	milhas = jardas / 1760;

	printf("\nMedida em polegadas: %.5f", polegadas);
	printf("\nMedida em jardas: %.5f", jardas);
	printf("\nMedida em milhas: %.5f\n", milhas);
	return 0;
}
