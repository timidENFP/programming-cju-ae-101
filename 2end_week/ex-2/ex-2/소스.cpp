#include <stdio.h>

int main(void)

{
	char ch;

	printf("input: ");

	scanf_s("%c", &ch);

	printf(" % c's ascii cord is %d", ch, ch);

	return 0;
}