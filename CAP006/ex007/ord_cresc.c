#include <stdio.h>

int main() {
	int vet[8], count;

	printf("Preencha o vetor: \n");
	for(int i = 0; i < 8; i++) {
		if (i == 0) {
			printf("Valor %d: ", i + 1);
			scanf("%d", &vet[0]);
		} else {
			int temp;
			printf("Valor %d: ", i + 1);
			scanf("%d", &temp);
			do {
				count  = i;
				int temp_2;
				if(temp < vet[count - 1]) {
					temp_2 = vet[count - 1];
					vet[count - 1] = temp;
					vet[count] = temp_2;
					count--;
				} else if(count ==i) {
					vet[count] = temp;
					count = 0;
				} else {
					count = 0;
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
