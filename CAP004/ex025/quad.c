#include <stdio.h>

int main() {
	float ang, voltas, ang_reduzido;
	int quad, quoc_reduc = 0;

	printf("Forneça o ângulo: ");
	scanf("%f", &ang);
	
	if(ang > 360 || ang < -360) {
		quoc_reduc = ang / 360;
	}
	
	

	return 0;
}
