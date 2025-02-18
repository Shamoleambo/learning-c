#include <stdio.h>

int main() {
	int num_leituras;

	printf("Forneça a quantidade de leituras que serão feitas: ");
	scanf("%d", &num_leituras);

	for(int i = 0; i < num_leituras; i++) {
		int n, fat = 1;
		printf("\nForneça um número: ");
		scanf("%d", &n);

		for(int j = n; j > 0; j--) {
			fat *= j;
		}
		printf("%d! = %d\n", n, fat);
	}


	return 0;
}
