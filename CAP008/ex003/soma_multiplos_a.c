#include <stdio.h>
#include <stdbool.h>

/*Ler 3 numeros: a, b, c
* Retornar soma de todos os numeros entre b e c que são multiplos de a
* O intervalo de numeros inteiros analizados é [b,c[ */

bool is_multiple_of_a (int a, int num) {
	if(num % a == 0) return true;
	else return false;
}

int sum_between_b_c(int b, int c, int a) {
	int sum = 0, first_num, last_num;

	if(b < c) {
		first_num = b;
		last_num = c;
	} else {
		first_num = c;
		last_num = b;
	}

	for(int i = first_num; i < last_num; i++) {
		if(is_multiple_of_a(a, i)) sum += i;
	}
	return sum;
}


int main () {
	int a, b, c, sum_mult_a = 0;

	printf("Digite o primeiro número (a) maior do que 1: ");
	scanf("%d", &a);
	printf("Digite o segundo número (b): ");
	scanf("%d", &b);
	printf("Digite o terceiro número (c):");
	scanf("%d", &c);

	sum_mult_a = sum_between_b_c(b, c, a);

	printf("\nA soma dos múltiplos de %d entre [%d,%d[ é: %d\n\n", a, b, c, sum_mult_a);


	return 0;
}
