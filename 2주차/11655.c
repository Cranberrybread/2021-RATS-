// scanf�� �迭 �Է¹����� ���� �ν� X ���� gets ����� 
#include <stdio.h>
#include <string.h>



void main(){
	char S[101] = {0};
	printf("plz write sentence that you want to change: ");
	gets(S);
	
	int i;

	int length = strlen(S);
	printf("%d\n", strlen(S));
	printf("%d\n", length);
	for(i=0;i<length;i++){
		if(('A' <= S[i] && S[i] <= 'L') || ('a' <= S[i] && S[i] <= 'l')){
			S[i] = S[i] + 13;
		}
		else if( ('M' <= S[i] && S[i] <= 'Z') || ('m' <= S[i] && S[i] <= 'z')) {
			S[i] = S[i] - 26 + 13;
		}
	}
	printf("%s", S);

}
