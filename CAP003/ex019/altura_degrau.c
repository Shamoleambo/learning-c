#include <stdio.h>
#include <math.h>

int main() {
	float h_degrau, h_desejada, raz_desejada_degrau, num_deg;

	printf("Forneça a altura do degrau: ");
	scanf("%f", &h_degrau);
	printf("Forneça a altura que se deseja alcançar: ");
	scanf("%f", &h_desejada);

	raz_desejada_degrau = h_desejada / h_degrau;
	num_deg = ceil(raz_desejada_degrau);

	printf("A razão entre a altura deseja e a altura do degrau é: %.2f\n", raz_desejada_degrau);
	printf("Portanto o número de degraus deve ser: %.0f\n", num_deg);
	return 0;
}
