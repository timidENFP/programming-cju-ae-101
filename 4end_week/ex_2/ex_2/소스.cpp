#include <stdio.h>
int main(void)
{
	int age = 25, chest = 95;
	char size;
	if (age < 20)
	{
		if (chest < 85)
		{
			size = 'S';
		}
		else if (85 <= chest < 95)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	else
	{ 
		if (chest < 90)
		{
			size = 'S';
		}
		else if (90 <= chest < 100)
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	printf("your size is %c .\n", size);
	return 0;
	
}