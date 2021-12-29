#include <stdio.h>
#include <string.h>

void main(){
	char S[100]; //단어 저장할 공간 
	int alphabet[26] = {0}; //알파벳 위치 저장 공간 
	scanf("%s", S); //문자열 입력받기 
	int length = strlen(S); //문자열 길이 
	int i;
	int index;
	 
	for(i=0;i<26;i++){
		alphabet[i] = -1; //alphabet에 -1다 넣어놓음 
	}
	
	for(i=0;i<length;i++){
		index = S[i] - 97; //아스키코드 이용 
		
		if(alphabet[index] == -1){
			alphabet[index] = i;
		}
			
			
	}
	
	for(i=0;i<26;i++){
		printf("%d ", alphabet[i]);
	}
}
