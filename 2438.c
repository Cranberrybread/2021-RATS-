//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
#include <stdio.h>
void main() {
	int num;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num);
	
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}
}