#include <stdio.h>

int main() {
	float lab, aval_sem, ex_final, media;

	printf("Forneça a nota do trabalho laboratorial: ");
	scanf("%f", &lab);
	printf("Forneça a nota da avaliação semestral: ");
	scanf("%f", &aval_sem);
	printf("Forneça a nota do exame final: ");
	scanf("%f", &ex_final);

	media = ((lab * 2) + (aval_sem * 3) + (ex_final *5))/10;

	if(media >= 8) {
		printf("Média: %.2f ==> A\n", media);
	} else if(media >= 7 && media < 8) {
		printf("Média: %.2f ==> B\n", media);
	} else if(media >= 6 && media < 7) {
		printf("Média: %.2f ==> C\n", media);
	} else if(media >= 5 && media < 6) {
		printf("Média: %.2f ==> D\n", media);
	} else {
		printf("Média: %.2f ==> F\n", media);
	}
	return 0;
}
