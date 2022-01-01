#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	char word[101];
	int length = 0;
	int i;
	
	printf("Plz write one word: ");
	scanf("%s", word);
	
	length = strlen(word);
	
	printf("%d", length);
}
