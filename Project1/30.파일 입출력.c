#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	
	fp = fopen("sample.txt", "w");

	if (fp == NULL)
	{
		printf("파일 열기에실패했습니다.\n");
	}
	else
	{
		printf("파일 열기에실패했습니다.\n");
	}
	fclose(fp);

	return 0;
}