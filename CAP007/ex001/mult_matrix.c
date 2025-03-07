#include <stdio.h>

int main() {
	/*Fazer um programa que lê uma matriz 2x2
	 Multiplica esta matriz pelo seu maior elemento
	 	ou seja: encontrar o maior elemento de uma matriz
	E exibe a matriz resultante da multiplicação*/

	int mat[2][2], mat_res[2][2], maior_el = 0;
	printf("Forneça os dados da matriz: \n\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("Matriz posição %dx%d: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			if(i == 0 && j == 0) {
				maior_el = mat[i][j];
			} else {
				if(mat[i][j] > maior_el){
					maior_el = mat[i][j];
				}
			}
		}
	}	

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			mat_res[i][j] = mat[i][j] * maior_el;
		}
	}



	printf("\n\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++) {
			printf("%d  ", mat_res[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	printf("O maior elemento da matriz é o número: %d", maior_el);
	printf("\n");
	return 0;
}
