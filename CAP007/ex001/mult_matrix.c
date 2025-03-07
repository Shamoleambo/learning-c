#include <stdio.h>

int main() {
	/*Fazer um programa que lê uma matriz 2x2
	 Multiplica esta matriz pelo seu maior elemento
	 	ou seja: encontrar o maior elemento de uma matriz
	E exibe a matriz resultante da multiplicação*/

	int mat[2][2];
	printf("Forneça os dados da matriz: \n\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("Matriz posição %dx%d: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}


	/*Testando se a matriz está sendo preenchida corretamente: */
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++) {
			printf("%d  ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
