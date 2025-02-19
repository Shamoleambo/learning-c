#include <stdio.h>

int main() {
	int vet_1[10], vet_2[10], vet[20], count = 0;

	printf("Preencha o primeiro vetor: \n");

	for (int i = 0; i < 10; i++) {
		printf("Posição %d: ", i);
		scanf("%d", &vet_1[i]);
	}

	printf("\nPreencha o segundo vetor: \n");
	for(int j = 0; j < 10; j++) {
		printf("Posição %d: ", j);
		scanf("%d", &vet_2[j]);
	}

	printf("\n\nNovo vetor\n");
	for(int i = 0; i < 20; i += 2) {
		vet[i] = vet_1[count];
		vet[i + 1] = vet_2[count];
		count++;
	}

	for(int i = 0; i < 20; i++){
		printf("%d: [%d]\n", i, vet[i]);
	}
	printf("\n");
	return 0;
}
