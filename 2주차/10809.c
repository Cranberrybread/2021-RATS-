#include <stdio.h>
#include <string.h>

void main(){
	char S[100]; //�ܾ� ������ ���� 
	int alphabet[26] = {0}; //���ĺ� ��ġ ���� ���� 
	scanf("%s", S); //���ڿ� �Է¹ޱ� 
	int length = strlen(S); //���ڿ� ���� 
	int i;
	int index;
	 
	for(i=0;i<26;i++){
		alphabet[i] = -1; //alphabet�� -1�� �־���� 
	}
	
	for(i=0;i<length;i++){
		index = S[i] - 97; //�ƽ�Ű�ڵ� �̿� 
		
		if(alphabet[index] == -1){
			alphabet[index] = i;
		}
			
			
	}
	
	for(i=0;i<26;i++){
		printf("%d ", alphabet[i]);
	}
}
