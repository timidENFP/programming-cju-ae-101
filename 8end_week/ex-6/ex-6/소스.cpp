#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define PATHTOKEN "\\"
#define MAXSPLITSIZE 200
#define MAXSTRLEN 1000

int main(void)
{
	char strFilePath[] = "C:\\Document\\Github\\Test1\\test.txt";
	char* pStrFilePath = strFilePath;
	char* pStrsplitFilePath[MAXSPLITSIZE];
	char* context = NULL;

	char* ptrSplit = strtok_s(pStrFilePath, PATHTOKEN, & context);
	int nCounter = 0;
	
	while (ptrSplit != NULL)
	{
		pStrsplitFilePath[nCounter] = ptrSplit;
		nCounter++;
		ptrSplit = strtok_s(NULL, PATHTOKEN, &context);
	}
	for (int i = 0; i < nCounter; i++)
	{
		printf("%d, %s\n", i, pStrsplitFilePath[i]);
	}
}