#include <stdio.h>

void main() {
	int num;
	printf("¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
	scanf_s("%d", &num);

	int i, j;

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (j = 1; j <= num - i; j++) {
			printf("*");
		}
		puts("");
	}
}
