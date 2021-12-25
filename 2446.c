#include <stdio.h>

void main() {

	int num;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	int i, j;

	for (i = 1; i <= num - 1; i++) {
		for (j = 1; j <= i - 1; j++) {
			printf(" ");
		}
		for (j = i - 1; j <= 2 * num - 1 - i; j++) {
			printf("*");
		}

		for (j = 2 * num - 1; j >= 2 * num - 1 - i; j--) {
			printf(" ");
		}
		puts("");
	}

	for (i = num; i >= 1; i--) {
		for (j = 1; j <= i - 1; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * (num - i) + 1; j++) {
			printf("*");
		}
		puts("");
	}
}