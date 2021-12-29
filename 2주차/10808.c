#include <stdio.h>
#include <string.h>

void main() {
	char word[100];
	int length;
	int i, j;
	scanf_s("%s", word);
	length = strlen(word);

	int alphabet[26] = {0};

	for (i = 0; i < length; i++) {
		alphabet[word[i] - 97]++;
	}
	for (j = 0; j < 26; j++) {
		printf("%d ", alphabet[j]);
		
	}

}
