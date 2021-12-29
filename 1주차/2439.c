//2439
//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

#include <stdio.h>

void main() {
	int num;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) { //행
		for (int j = num; j >= 1; j--) { //열 공백도 하나의 문자로 취급
			if (j > i)
				printf(" ");
			else 
				printf("*");
		}
		puts("");
	}
}
