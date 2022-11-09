#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = {};
	char a[20] = "wine";
	char b[20] = "apple";
	char c[9] = "pear";
	int c_size = sizeof c;

	printf("%c%c%c%c%c%c%c%c%c, %d\n ", c[0], a[1], a[2], a[3], b[0],b[1], b[2], b[3],b[4],c_size);
	return 0;
}