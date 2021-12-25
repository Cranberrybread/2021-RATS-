#include <stdio.h>

void main() {
	int num;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	int i, j;

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		puts("");
	}
}