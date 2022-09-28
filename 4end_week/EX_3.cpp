#include <stdio.h>

int main(void)
{
	int nA = 0;
	int nB = 0;
	char choper;

	printf("input your arithmetic operation : \n");
	scanf_s("%d %c %d", &nA, &choper, 1, &nB);

	
	switch (choper)
	{
	case '+':
	{
		printf("addition: %d + %d = %d \n", nA, nB, nA+nB );
		break;
	}
	case '-':
	{
		printf("subtraction:%d - %d = %d \n", nA, nB, nA - nB);
		break;
	}
	case '*':
	{
		printf("multiplication: %d+%d =%d \n", nA, nB, nA * nB);
		break;
	}
	case '/':
	{
		printf("Division:%d / %d =%d ,\n",nA,nB , nA /nB);
		break;
	}
	default:
	{
		printf("error");
		break;
	}


	}


	return 0;
}