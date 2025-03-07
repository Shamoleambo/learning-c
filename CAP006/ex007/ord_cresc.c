#include <stdio.h>

int main() {
	int vet[8] = {0,0,0,0,0,0,0,0}, count;

	printf("Preencha o vetor: \n");
	for(int i = 0; i < 8; i++) {
		if (i == 0) {
			printf("Valor %d: ", i + 1);
			scanf("%d", &vet[0]);
		} else {
			count = i;
			int temp;
			printf("Valor %d: ", i + 1);
			scanf("%d", &temp);
			do {
				if(temp > vet[count - 1]) {
					vet[count] = temp;
					count = 0;
				} else {
					vet[count] = vet[count - 1];
					count--;
				}	
			} while (count > 0);
		}
	}

	printf("\n\n Vetor em ordem crescente: \n");
	for(int i = 0; i < 8; i++) {
		printf("Posição %d: %d\n", i, vet[i]);
	}
	printf("\n");


	return 0;
}
