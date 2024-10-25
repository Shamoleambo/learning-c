#include <stdio.h>

int fillTheArray (int size, int arr[]) {
	int num;
	for(int i = 0; i < size; i++) {
		scanf("%d", &num);
		arr[i] = num;
	}
	return 0;
}

int printTheArray(int size, int arr[]) {
	printf("PRINT THE ARRAY\n\n");
	for(int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}

int main() {
	int size;
	
	printf("provide the size of the array: ");
	scanf("%d", &size);

	int arr[size];

	fillTheArray(size, arr);
	printTheArray(size, arr);

	return 0;
}
