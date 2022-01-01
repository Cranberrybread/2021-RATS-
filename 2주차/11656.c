//https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=tipsware&logNo=221301535902
//위의 링크 참조 
#include <stdio.h>
#include <string.h>

void main(){
	char S[1001] = {0}; //입력받을 단어
	char Suffix[1001][1001] = {0}; //접미사 저장
	int i, j, k;
	printf("write one word: ");
	scanf("%s", S);
	
	int length = strlen(S);
	
	//접미사 배열에 저장 
	for(i=0;i<length;i++){ 
		for(j=i;j<length;j++){
			Suffix[i][j-i] = S[j];
		}
	}
	
	//접미사 정렬 by using 버블정렬 
	char temp[1001] = {0};
	for ( i = 0; i < length - 1; i++)
	{
		for ( j = 0; j < (length - 1)- i; j++)
		{
			if (strcmp(Suffix[j], Suffix[j+1]) > 0)
			{
				strcpy_s(temp, length + 1, Suffix[j]);
				strcpy_s(Suffix[j], length + 1, Suffix[j + 1]);
				strcpy_s(Suffix[j + 1], length + 1, temp);
			}
		}
	}
	
	
	for(i = 0; i < length; i++){
		printf("%s\n", Suffix[i]);
	}
}
