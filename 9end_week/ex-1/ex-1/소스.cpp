#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <direct.h>

#define _CRT_SECURE_NO_WARNINGS
#define stusize 5

extern int errno;

typedef struct studect {
	int sn;
	char name[100];
	int kor, eng, math;
	double avg; 
	char gr;
}student;

double avg(int num) {
	double rst = 0;
	va_list args;
	va_start(args, num);
	for (int i = 0;i < num;i++) {
		rst +=va_arg(args, int);
	}
	va_end(args);
	return rst / num;
}

void swap_stu(student** x, student** y) {
	student* tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void print_stu (student* x[], int n) {
	for (int i = 0; i < n; i++) {
		printf("\n%d %d %s   \t8d %8d %8d %8.1lf    %c",
			i, x[i]->sn, x[i]->name, x[i]->kor, x[i]->eng, x[i]->math, x[i]->avg, x[i]->gr);
	}
}
//void err_msg(char* msg) {
	//fputs(msg, stderr);
	//fputc('\n', stderr);
	//fprintf(stderr, " value of error number : %d\n ", errno); }

int main(int  argc, char** argv)
{
	FILE* fp;
	fp = fopen("students_ list.txt","r");
	char str[50];
	printf("current path : %s\n ", _getcwd(NULL,0));
	
	student* stu[stusize];

	for(int i = 0; i < stusize; i++) {
		stu[i] = (student*)malloc(sizeof(student));
		fscanf_s(fp, " % d % s % d % d % d",
			&(stu[i]->sn), stu[i]->name, &(stu[i]->kor), &stu[i]->eng, stu[i]->math );
		stu[i]->avg = avg(3, stu[i]->kor, stu[i]->eng, stu[i]->math);

		}




}
