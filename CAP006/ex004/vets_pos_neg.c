#include <stdio.h>

int main() {
	int vet[8], positivos[8] = {0}, negativos[8] = {0};

	printf("Preencha o vetor:\n");
	for(int i = 0; i < 8; i++) {
		printf("Posição %d: ", i);
		scanf("%d", &vet[i]);
	}

	for(int i = 0; i < 8; i++) {
		if(vet[i] > 0) {
			positivos[i] = vet[i];
		} else {
			negativos[i] = vet[i];
		}
	}

	printf("\nVetor positivos:\n");
	for(int i = 0;  i < 8; i++) {
		if(positivos[i] != 0) printf("%d: [%d]\n", i, positivos[i]);
	}

	printf("\n\nVetor negativos:\n");
	for(int i = 0; i < 8; i++) {
		if(negativos[i] != 0) printf("%d: [%d]\n", i, negativos[i]);
	}
	printf("\n");
	return 0;
}
