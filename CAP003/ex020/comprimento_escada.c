#include <stdio.h>
#include <math.h>

int main() {
	float angulo, altura_parede, seno, comprimento_escada;

	printf("Forneça o ângulo entre o chão e a escada: ");
	scanf("%f", &angulo);
	printf("Forneça a altura da parede: ");
	scanf("%f", &altura_parede);

	seno = sin(angulo);
	comprimento_escada = altura_parede / seno;

	printf("O comprimento da escada é: %.2f\n", comprimento_escada);
	return 0;
}
