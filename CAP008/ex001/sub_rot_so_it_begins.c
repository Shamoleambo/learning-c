#include <stdio.h>

int digite_um_num () {
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	if(num >= 0) return 1;
	else return 0;
}

int main() {
	int valor_retornado = digite_um_num();
	if(valor_retornado == 1) {
		printf("O número digitado é positivo, pois o valor retornado é %d\n", valor_retornado);
	} else {
		printf("O número digitado é negativo, pois o valor retornado é %d\n", valor_retornado);
	}
	return 0;
}

