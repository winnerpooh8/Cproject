#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	char name[20];
	int age;
	double height;

	fp = fopen("user_info.txt", "r");

	if (fp == NULL)
	{
		printf("파일 읽기 실패\n");
	}
	printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	printf("번호\t나이\t이름\t키\n");
	printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	for (int i = 0; i < 5; i++)
	{
		fscanf(fp,"%d %s %lf", &age,name,&height);
		printf("%d\t%2d\t%4s\t%3.2lf\n", i + 1, age, name, height);
	}
	printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");

	return 0;

}
