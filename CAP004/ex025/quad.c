#include <stdio.h>

int main() {
	float ang, voltas, ang_reduzido;
	int quad, quoc_reduc = 0;

	printf("Forneça o ângulo: ");
	scanf("%f", &ang);
	
	if(ang > 360 || ang < -360) {
		quoc_reduc = ang / 360;
	}

	if(ang >= 0) {
		ang_reduzido = ang - quoc_reduc * 360;
	} else {
		ang_reduzido = ang + quoc_reduc * 360;
	}

	if(ang_reduzido >= 0 && ang_reduzido < 90) {
		quad = 1;
	} else if(ang_reduzido >= 90 && ang_reduzido < 180) {
		quad = 2;
	} else if(ang_reduzido >= 180 && ang_reduzido < 270) {
		quad = 3;
	} else {
		quad = 4;
	}

	voltas = ang / 360;

	printf("\n\nO angulo %f se localiza no quadrante: %d\n", ang, quad);
	if(voltas >= 0){
		printf("Voltas: %.2f\n", voltas);
		printf("Sentido anti-horário / +\n\n");
	} else {
		printf("Voltas: %.2f\n", voltas * -1);
		printf("Sentido horário / -\n\n");
	}


	return 0;
}
