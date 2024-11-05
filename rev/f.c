#include <stdio.h>

int fillTheArray(int arr[], int size) {
	int num;

	for(int i = 0; i<size; i++) {
		printf("Provide the number for position %d: ", i);
		scanf("%d", &num);
		arr[i] = num;
	}
	return 0;
}

int printTheArray(int arr[], int size) {
	printf("\n\n BEHOLD THE ARRAY:\n");

	for(int i = 0; i<size; i++) {
		printf("[%i] = %d\n", i, arr[i]);
	}
	return 0;
}
		

int main () {
	int size;

	printf("Provide the size of the array:");
	scanf("%d", &size);

	int arr[size];

	fillTheArray(arr, size);
	printTheArray(arr, size);

	return 0;
}
