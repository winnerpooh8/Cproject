#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	
	fp = fopen("sample.txt", "w");

	if (fp == NULL)
	{
		printf("���� ���⿡�����߽��ϴ�.\n");
	}
	else
	{
		printf("���� ���⿡�����߽��ϴ�.\n");
	}
	fclose(fp);

	return 0;
}