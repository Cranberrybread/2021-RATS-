#include <stdio.h>

void main() {
	int num;
	printf("¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
	scanf_s("%d", &num);

	int i, j;

	for (i = 1; i <= num - 1; i++) {

		for (j = 1; j <= num - i; j++) {
			printf(" ");
		}
		printf("*");
		for (j = 1; j <= 2 * (i - 1) - 1; j++) {
			printf(" ");
		}
		if (i >= 2) {
			printf("*");
		}

		puts("");

	}
	for (i = 1; i <= 2 * num - 1; i++) {
		printf("*");
	}

}
