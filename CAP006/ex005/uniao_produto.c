#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet_1[10], vet_2[10], uniao[10] = {0};

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

	printf("\n\n");
	for(int i = 0; i < 10; i++) {
		printf("%d\n", uniao[i]);
	}
	printf("\n\n");
			
	return 0;
}
