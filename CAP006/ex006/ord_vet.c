#include <stdio.h>

int main () {
	int vet[10], decresc[10], add, count = 0;

	printf("Forneça o array: ");
	for(int i = 0; i < 10; i++) {
		printf("Elemento da posição %d: ", i);
		scanf("%d", &vet[i]);
	}

	return 0;
}
