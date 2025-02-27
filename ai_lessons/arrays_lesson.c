#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int* arr = (int*) malloc(n * sizeof(int));

	if(arr == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Initial array elements: ");
	for(int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	int new_size;
	printf("Enter the new size of the array: ");
	scanf("%d", &new_size);

	arr = (int*) realloc(arr, new_size * sizeof(int));

	if(arr == NULL) {
		printf("Memory realocation failed!\n");
		return 1;
	}

	if(new_size > n) {
		printf("Enter %d more integers:\n", new_size - n);
		for(int i = n; i < new_size; i++) {
			scanf("%d", &arr[i]);
		}
	}

	printf("Resized array elements: ");
	for(int i = 0; i < new_size; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");


	free(arr);
	return 0;
}
