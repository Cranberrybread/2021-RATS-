//2441
//첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

#include <stdio.h>

void main() {
	int num;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			if (j < i)
				printf(" ");
			else
				printf("*");
		}
		puts("");
	}
}
