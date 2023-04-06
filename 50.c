#include <stdio.h>

int main() {

	unsigned max = 2147483647;
	printf("%u\n", max);
	max = max + 1;
	printf("%u\n", max);
	return 0;
}