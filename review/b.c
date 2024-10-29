#include <stdio.h>

void fillTheArray(int arr[], int size){
	int num;
	printf("Fill the positions with an integer\n\n");

	for(int i = 0; i < size; i++) {
		printf("Provide the element for the position %d: ", i);
		scanf("%d", &num);
		arr[i] = num;
	}
}

void printTheArray (int arr[], int size) {
	printf("\n\nPrinting the MIGHTY array!\n\n");

	for(int i = 0; i < size; i++) {
		printf("Position %d: <%d>\n", i, arr[i]);
	}
}
		

int main() {
	int arraySize;

	printf("Provide the size of the array: ");
	scanf("%d", &arraySize);

	int arr[arraySize];

	fillTheArray(arr, arraySize);
	printTheArray(arr, arraySize);
	return 0;
}
