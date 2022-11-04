#include <stdio.h>

int calculator(int x, int y, int z)
{
	int res;
	switch (z)
	{
	case '+':
		res = x + y;
		break;
	case '-':
		res = x - y;
		break;
	case '*':
		res = x * y;
		break;
	case '/':
		res = x / y;
		break;
	default:
		printf("Error");
		break;
	}
	printf("%d %c %d = %d", x, z, y, res);
	return 0;
}

int main(void)
{
	char cal;
	int num1, num2, res;
	printf("Input your authemetic operation: ");
	scanf_s("%d%c", &num1, &cal);
	scanf_s("%d", &num2);

	calculator(num1, num2, cal);


	return 0;
}