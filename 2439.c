//2439
//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

#include <stdio.h>

void main() {
	int num;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) { //��
		for (int j = num; j >= 1; j--) { //�� ���鵵 �ϳ��� ���ڷ� ���
			if (j > i)
				printf(" ");
			else 
				printf("*");
		}
		puts("");
	}
}