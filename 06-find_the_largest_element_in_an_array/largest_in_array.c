#include <stdio.h>

int main() {
	int n, i;
	int largest;

	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter %d numbers:\n", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	largest = arr[0];

	for(i = 0; i < n; i++) {
		if(arr[i] > largest) {
			largest = arr[i];
		}
	}

	printf("The largest number is: %d\n", largest);
	return 0;
}
