#include <stdio.h>
/*Ler 3 numeros: a, b, c
* Retornar soma de todos os numeros entre b e c que são multiplos de a
* O intervalo de numeros inteiros analizados é [b,c[ */

bool is_multiple_of_a (int a, int num) {
	if(num % a == 0) return true;
	else return false;
}

int main () {
	int a, b, c;

	printf("Digite o primeiro número (a) maior do que 1: ");
	scanf("%d", &a);
	printf("Digite o segundo número (b): ");
	scanf("%d", &b);
	printf("Digite o terceiro número (c):");
	scanf("%d", &c);


	return 0;
}
