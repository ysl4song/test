#include <stdio.h>
#include <stdlib.h>

#define CHAR_NUM	(26)

int main(void) {
	char ch[CHAR_NUM] = {0};
	char str[] = "paper";
	int idx;
	char chTemp, answer;

	for (idx = 0; idx < strlen(str); idx++) {
		chTemp = tolower(str[idx]);
		ch[(chTemp-'a')]++;
	}

	for (idx = 0; idx < strlen(str); idx++) {
		chTemp = tolower(str[idx]);
		if (ch[(chTemp-'a')] == 1) {
			answer = str[idx];
			break;
		}
	}

	printf("answer: %c\n", answer);

	return 0;
}
