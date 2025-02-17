#include <stdio.h>

int main() {
	float hora;
	int hora_minutos, minutos, hora_inteira;

	printf("Forneça a hora: ");
	scanf("%f", &hora);

	hora_inteira = hora / 1;
	minutos = hora * 100 - hora_inteira * 100;

	hora_minutos = hora_inteira * 60 + minutos;

	printf("A hora %.2f em minutos será: %d\n", hora, hora_minutos);
	return 0;
}
