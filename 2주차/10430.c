#include <stdio.h>
#include <string.h>

void main(){
	int A, B, C;
	printf("give me 3 number: ");
	scanf("%d %d %d", &A, &B, &C);
	
	printf("%d\n", (A+B)%C);
	printf("%d\n", ((A%C) + (B%C))%C);
	printf("%d\n", (A*B)%C);
	printf("%d\n", ((A%C)*(B%C))%C);
	
}
