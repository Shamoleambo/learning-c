#include <stdio.h>

int main () {
	int vet[10], add, count = 0;

	printf("Forneça o array: \n");
	for(int i = 0; i < 10; i++) {
		printf("Elemento da posição %d: ", i);
		scanf("%d", &vet[i]);
	}
	
	do {
		int temp;
		if(vet[count] < vet[count + 1]) {
			temp = vet[count];
			vet[count] = vet[count + 1];
			vet[count + 1] = temp;
			count = 0;
		} else {
			count ++;
		}
	}while(count < 10);

	printf("Vetor em ordem decrescente: \n");
	for(int i = 0; i < 10; i++) {
		printf("Posição %d = [%d]\n", i, vet[i]);
	}

	return 0;
}
