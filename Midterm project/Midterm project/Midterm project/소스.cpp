#include<stdio.h>
void input_nums(int* lotto_nums);
void print_nums(int* clotto_num);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int num;
	int a, b;
	int dup;
	for (a = 0; a < 6; a++)
	{
		printf("insert your number : ");
		scanf_s(" % d", &num);
		dup = 0;
		for (b = 0; b < a; b++)
		{
			if (num == lotto_nums[b])
			{
				dup = 1;
				break;
			}
		}
		if (!dup)
		{
			lotto_nums[a] = num;
		}
		else
		{
			printf("overlapping numbers!!\n");
				a--;
		}
	}
}

void print_nums(int* lotto_nums)
{
	int a;
	
	printf("lotto number : ");
	
	for ( a= 0; a < 6; a++)
	{
		printf("%d", lotto_nums[a]);
	}
}