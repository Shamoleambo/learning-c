#include <stdio.h>
#include <math.h>

int main () {
	float h_parede, c_escada, distancia;

	printf("Forneça a altura em que se quer pendurar o quadro: ");
	scanf("%f", &h_parede);
	printf("Forneça o comprimento da escada (deve ser maior que a altura da parede): ");
	scanf("%f", &c_escada);

	distancia = sqrt(pow(c_escada, 2) - pow(h_parede, 2));
	printf("\n\nA distância que se deve posicionar a escada é: %.3f\n", distancia);
	return 0;
}
