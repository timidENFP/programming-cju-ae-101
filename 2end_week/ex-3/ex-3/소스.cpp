#include <stdio.h>

int main(void)
{
	int kor = 3;
	int eng = 5;
	int mat = 4;
	
	int res;
	double kscore = 3.8;
	double escore = 4.4;
	double macore = 3.9;

	int credits = kor + eng + mat;
	double grade = (kor * kscore + eng * escore + mat * macore) / credits;
	res = (credits >= 10) && (grade > 4.0);
	printf(" % d \n", res);

	return 0;
}
