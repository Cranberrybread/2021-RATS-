#include <stdio.h>
#include <string.h>

void main(){
	char S[101][101] = {0};
	int i;
	int num = 0;
	
	for(i=0;i<100;i++){
		scanf("%s", S[i]);
		num++;
		if(S[i] == 0) break;
	}
	
	
	
	for(i=0;i<num;i++){
		int alph = 0;
		int ALPH = 0;
		int Null = 0;
		int number = 0;
	
		for(j=0;j<strlen(S[i]);j++){
			if(S[i][j] >= 65 && S[i][j]<= 90)
				ALPH++;
			else if(S[i][j] >= 97 && S[i][j]<= 122)
				alph++;
			else if(S[i][j] >= 48 && S[i][j]<= 57)
				number++;
			else
				Null++;
		}
		
		printf("%d %d %d %d", alph, ALPH, number, Null);
	}
	
	
	 
	
}
