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
		printf("���� �б� ����\n");
	}
	printf("����������������������������������������������������������\n");
	printf("��ȣ\t����\t�̸�\tŰ\n");
	printf("����������������������������������������������������������\n");
	for (int i = 0; i < 5; i++)
	{
		fscanf(fp,"%d %s %lf", &age,name,&height);
		printf("%d\t%2d\t%4s\t%3.2lf\n", i + 1, age, name, height);
	}
	printf("����������������������������������������������������������\n");

	return 0;

}
