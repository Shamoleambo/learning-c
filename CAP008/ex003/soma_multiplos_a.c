#include <stdio.h>
/*Ler 3 numeros: a, b, c
* Retornar soma de todos os numeros entre b e c que são multiplos de a
* O intervalo de numeros inteiros analizados é [b,c[ */

bool is_multiple_of_a (int a, int num) {
	if(num % a == 0) return true;
	else return false;
}

int sum_between_b_c(int b, int c, int a) {
	int sum, first_num, last_num;

	if(b < c) {
		first_num = b;
		last_num = c;
	} else {
		first_num = c;
		last_num = b;
	}

	for(int i = first_num; i < last_num; i++) {
		if(is_multiple_of_a(a, i)) soma += i;
	}
	return 0;
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


	return 0;
}
