#include <stdio.h>

int main()
{
	int arr[] = {7, 6, 9, 10, 60, 100, 8, 4};
	int min = 0;
	int n = 8;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	for (int k = 0; k < 8; k++) {
		printf("%d\n", arr[k]);//´òÓ¡Êı×é
	}
	return 0;
}