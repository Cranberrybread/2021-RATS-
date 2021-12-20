//2442
//첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제
//별은 가운데를 기준으로 대칭이어야 한다.

#include <stdio.h>

void main() {
	int num;
	int j; //공백을 위한 변수
	int k; //별을 위한 변수
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (j = num - i; j >= 1; j--) {
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		puts("");
	}
}
/*(공백 / 별 )
num = 3인 경우 
 (2 / 1)
 (1 / 3)
 (0 / 5)
 num = 5인 경우
 (4 / 1)
 (3 / 3)
 (2 / 5)
 (1 / 7)
 (0 / 9)

*/