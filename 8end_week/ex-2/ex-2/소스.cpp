#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
	char str[200];
	char res_str[200];
	const char* star = "***************";
	printf("put in the word : ");
	scanf_s("%s", str, (int)sizeof(str));
	int len = strlen(str);
	if (len < 5)
	{
		strcpy_s(res_str, str);
	}
	else
	{
		strncpy_s(res_str, str, 5);
		res_str[5] = '\0';
		strncat_s(res_str, star, len -5);
	}
	printf("word entered : %s, omitted word : %s \n", str, res_str);
	return 0;
}
