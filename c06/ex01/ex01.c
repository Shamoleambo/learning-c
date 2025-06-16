#include <stdio.h>

int main() {
	int vet[9];

	printf("Preencha um vetor de 9 posições com 9 números: \n");

	for(int i=0; i<10; i++) {
		scanf("%d", &vet[i]);
	}

	for(int i=0; i<10; i++) {
		printf("%d", vet[i]);
	}
}
