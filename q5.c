
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[] = "racecar";
	//char str[] = "abc";
	int idx, len;
	int isPalindrome = 1;

	len = strlen(str);
	if (len == 0)
		isPalindrome = 0;

	for (idx = 0; idx < len/2; idx++) {
		if (str[idx] != str[len-idx-1]) {
			isPalindrome = 0;
			break;
		}
	}

	printf("%s -> isPalindrome: %d\n", str, isPalindrome);

	return 0;
}
