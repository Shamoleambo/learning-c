#include <stdio.h>
#include <stdbool.h>

int main() {
	int vet_1[10], vet_2[10], uniao[10] = {0}, diferenca[10] = {0}, soma[10];

	printf("Preencha o primeiro vetor: \n");
	for(int i = 0; i < 10; i++) {
		printf("Posição %d: ", i);
		scanf("%d", &vet_1[i]);
	}
	printf("\nPreencha o segundo vetor: \n");
	for(int i = 0; i < 10; i++){
		printf("Posição %d: ", i);
		scanf("%d", &vet_2[i]);
	}

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			if(vet_1[i] == vet_2[j]) {
				uniao[i] = vet_2[j];
			}
		}
	}
	
	for(int i = 0; i < 10; i++) {
		bool nao_presente = true;
		for(int j = 0; j< 10; j++) {
			if(vet_1[i] == vet_2[j]) {
				nao_presente = false;
			}
		}
		if(nao_presente) {
			diferenca[i] = vet_1[i];
		}
	}

	for(int i = 0; i < 10; i++) {
		soma[i] = vet_1[i] + vet_2[i];
	}

	printf("\n\n");

	for(int i = 0; i < 10; i++) {
		printf("%d + %d = %d\n", vet_1[i], vet_2[i], soma[i]);
	}

	printf("\n\n");

	return 0;
}
