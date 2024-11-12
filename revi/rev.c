#include <stdio.h>

void fillTheArray(int arr[], int size) {
	int num;

	printf("\nFilling the array\n");

	for(int i = 0; i < size; i++) {
		printf("Provide the number for position %d: ", i);
		scanf("%d", &num);
		arr[i] = num;
	}
}

void printTheArray(int arr[], int size) {
	printf("\n\nPrint the array\n\n");

	for(int i = 0; i < size; i++) {
		printf("Position %d: %d\n", i, arr[i]);
	}
}
		

int main () {
	int size;

	printf("Provide the size of the array: ");
	scanf("%d", &size);

	int arr[size];

	fillTheArray(arr, size);
	printTheArray(arr, size);
	return 0;
}
