//2440
//ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����

#include <stdio.h>

void main() {
	int num;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num - i + 1; j++) {
			printf("*");
		}
		puts("");
	}
}