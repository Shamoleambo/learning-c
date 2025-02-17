#include <stdio.h>

int main(){
	float n1, n2;

	printf("Primeiro número: ");
	scanf("%f", &n1);
	printf("Segundo número: ");
	scanf("%f", &n2);

	if(n1 > n2) {
		printf("O maior entre %.2f e %.2f é: %.2f\n", n1, n2, n1);
	} else {
		printf("O maior entre %.2f e %.2f é: %.2f\n", n1, n2, n2);
	}
	return 0;
}
