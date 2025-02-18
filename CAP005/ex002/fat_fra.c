#include <stdio.h>

int main() {
	int n;
	float E = 1;

	printf("Forneça um número positivo n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		int fat = 1;
		for(int j = i; j > 0; j--) {
			fat *= j;
		}
		E += 1.0/fat;
	}

	printf("\n\n E = %.8f\n", E);
	return 0;

}
