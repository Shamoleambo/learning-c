#include <stdio.h>

int main() {
	int notas[10][3], menores_notas[10][2], qtd_menor_p1, qtd_menor_p2, qtde_menor_p3;

	/*Preencher matriz com notas p1, p2, p3 de 10 alunos;
	 * exibir menor nota dentre as 3 de cada aluno;
	 * contar qtas menores notas na p1, p2 e p3*/

	printf("Preencha as notas dos alunos: \n");
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 3; j++) {
			if(j == 0) {
				printf("P1 aluno %d: ", i + 1);
				scanf("%d", &notas[i][j]);
			} else if (j == 1) {
				printf("P2 aluno %d: ", i + 1);
				scanf("%d", &notas[i][j]);
			} else {
				printf("P3 aluno %d: ", i + 1);
				scanf("%d", &notas[i][j]);
			}
		}
	}

	printf("\n\n\nNotas dos Alunos: \n\n");
	printf("     P1   P2   P3\n");
	for(int i = 0; i < 10; i ++) {
		printf("Aluno %d:  ", i + 1);
		for(int j = 0; j < 3; j++) {
			printf("%d  ", notas[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	for(int i = 0; i < 10; i++) {
		int temp = 0;
		for(int j = 0; j < 3; j++) {
			if(j == 0) temp = notas[i][j];
			else if(notas[i][j] < temp) temp = notas[i][j];
		}
		menores_notas[i][0] = i + 1;
		menores_notas[i][1] = temp;
	}

	printf("\n\nMenores notas de cada aluno: \n\n");
	for(int i = 0; i < 10; i++) {
		printf("Aluno %d / menor nota: %d\n", menores_notas[i][0], menores_notas[i][1]);
	}


	printf("\n\n");
			
	return 0;
}
