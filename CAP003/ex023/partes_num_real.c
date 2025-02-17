#include <stdio.h>
#include <math.h>

int main(){
	float num, frac, arred;
	int inteira;

	printf("Forneça um número real: ");
	scanf("%f", &num);

	inteira = num / 1;
	frac = num - inteira;
	arred = round(num);

	printf("Parte inteira: %d\n", inteira);
	printf("Parte frac: %f\n", frac);
	printf("Arredondamento: %.0f\n", arred);
	return 0;
}
