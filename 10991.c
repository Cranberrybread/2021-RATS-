#include <stdio.h>

void main() {
	int num;
	printf("���ڸ� �Է��ϼ���: ");
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