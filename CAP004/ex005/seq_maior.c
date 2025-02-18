#include <stdio.h>

int main() {
	float n1, n2, n3, num;

	printf("Primeiro número: ");
	scanf("%f", &n1);
	printf("Segundo número: ");
	scanf("%f", &n2);
	printf("Terceiro número: ");
	scanf("%f", &n3);
	printf("Número a ser analisado: ");
	scanf("%f", &num);

	if(num > n3) {
		printf("%f, %f, %f, %f\n", n1, n2, n3, num);
	} else if(num < n3 && num > n2) {
		printf("%f, %f, %f, %f\n", n1, n2, num, n3);
	}else if(num < n2 && num > n1) {
		printf("%f, %f, %f, %f\n", n1, num, n2, n3);
	}else {
		printf("%f, %f, %f, %f\n", num, n1, n2, n3);
	}

	return 0;
}
