#include <stdio.h>

int main () {
	int n1, n2;
	printf("Primeiro número: ");
	scanf("%d", &n1);
	printf("Segundo número: ");
	scanf("%d", &n2);
	int soma = soma(n1, n2);
	printf("A soma dos números entre %d e %d é = %d\n", n1, n2, soma);
	return 0;
}
