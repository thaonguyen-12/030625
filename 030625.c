#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[10];
	int sum = 0;
	printf("nhap so nguyen: \n");
	for (int i = 0; i < 10; i++) {
		printf("Phan tu %d: ", i + 1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("tong: %d\n", sum);
	return 0;
}

