#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
	float primos[9];

	printf("Preenchendo o vetor\n");
	for(int i = 0; i < 9; i++) {
		printf("Preencha a posição %d: ", i);
		scanf("%f", &primos[i]);
	}

	for(int i = 0; i < 9; i++) {
		float num = primos[i], n = 2;
		bool is_primo = false;
		do {
			float remainder = fmod(num, n);
			if (remainder == 0) {
				n = num + 1;
			}
			n++;
			if(n == num){
			       	is_primo = true;
			}
		} while (n < num);

		if(is_primo) {
			printf("\n\n%f é primo e sua posição é: %d\n", num, i);
		}
	}

	return 0;
}
