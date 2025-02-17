#include <stdio.h>

int main() {
	float n1, n2, n3, media, n_min_exame;

	printf("Primeira nota: ");
	scanf("%f", &n1);
	printf("Segunda nota: ");
	scanf("%f", &n2);
	printf("Terceira nota: ");
	scanf("%f", &n3);

	media = (n1 + n2 + n3)/3;

	if(media >= 7) {
		printf("Aprovado - %.2f\n", media);
	}else if(media >= 3 && media < 7) {
		n_min_exame = 6*2 - media;
		printf("Exame - média: %.2f - nota necessária para aprovação: %.2f\n", media, n_min_exame);
	} else {
		printf("Reprovado - %.2f\n", media);
	}

	return 0;
}
