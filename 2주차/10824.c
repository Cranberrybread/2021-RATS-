#include <stdio.h>
#include <string.h>

void main(){
	long long A, B, C, D;
	printf("plz write 4 number: ");
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	
	long long AB, CD;
	char Plus[100];
	sprintf(Plus, "%lld%lld %lld%lld", A, B, C, D);
	sscanf(Plus, "%lld %lld", &AB, &CD);
	
	printf("%d", AB+CD);
	
}

