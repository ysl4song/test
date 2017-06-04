
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input = 14;
	int count = 0;

	do {
		if (input & 0x01)
			count++;

		input >>= 1;
	} while(input > 0);

	printf("the number of 1 bits: %d", count);

	return 0;
}
