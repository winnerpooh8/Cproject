#define _CRT_SECURE_NO_WARNINGS //strcpy ���� ����
#include <stdio.h>
#include <string.h> //���ڿ� ���� �۾� �Լ� ���


int main()
{
	//1. ���ڿ� �ۼ����
	//char ���ڿ���[] = "����";
	char name[] = "�ڹ�";
	//name = "���̽�"; //�迭�� ���� �Ұ� 

	//2. char* ����
	char* job = "Application developer";
	job = "Programmer"; // ����Ű�� ���� ����� ���̹Ƿ�, ���� 
	printf("%s %s", name, job);

	//2. ���ڿ� �迭
	//char �迭��[][���Ǳ���] = {"���ڿ�1","���ڿ�2",...};
	char inventory[][20] = {"�ٳ���","����","���","����"};

	//3. char* ����
	char* shop[] = { "����ٳ���","������" };

	//�Լ� 1. strlen()
	char arry1[] = "C Programing";
	char arry2[] = "�����α׷���";

	printf("arry1�� ���ڿ��� ���� = %lu\n", strlen(arry1));
	//% : ���� ������
	//l : long(����)
	//u : unsigned(��ȣ�� ���� �����ϴ�.(���ڰ� ������ �ƴ��� ǥ��)
	printf("array2�� ���ڿ��� ���� = %lu\n", strlen(array2));
	printf("array2�� ���ڿ��� ���� = %lu(sizeof)\n", sizeof(array2));

	//sizeof���� �� ��Ȯ�ϰ� ��밡���� ���̸� �� �� ����.

	//�Լ� 2. stcpy()
	//stcpy(�ٲ� ����,�ٲٷ��� ����)�� ����, ���ڿ��� ���� �����ϰų�, �����ϴµ� ����մϴ�.
	//�Ϲ������� ���ڿ��� ������ �� ���� ����

	char sample[] = "apple";
	char sample[20];

	strcpy(sample2, sample);
	printf("%s", sample2);

    //�Լ� 3. strncpy()
	//strncpy(�ٲܹ���, �ٲٷ��� ����, ����);�� ���� ���ڿ��� �ٲٷ��� ���� �� �Ϻ��� ���� �������� �����մϴ�.
	char sample3[] = "HellEveryone";
	char sample4[20];
	strncpy(sample4, sample3, 5); // ����ִ� ������ �������� ��� �̻��� ���� ���� ��.
	sample4[5] = '\0'; //������ �κ��� \0���� ó���մϴ�/
	printf("%s", sample4);

	//�Լ� 4. strcat()
	//strcat(���ڿ�1, ���ڿ�2)�� ���� ���ڿ� 1�� ���ڿ�2�� ��ĥ �� �ֽ��ϴ�.
	char sample5[20] = "C���";
	char sample6[] = "���α׷���";
	strcat(sample5, sample6);
	//��ĥ ��� ���ڿ�1���� ���̰� �� Ŀ�� ������ ����.
	//���� �� �ܾ �� ���� ����� �迭�� ���̶� �ۼ��ؼ� �� ū ��������� �˷��� ��.
	printf("%s", sample5);


	//�Լ� 5. strcmp()
	//strcmp(���ڿ�1, ���ڿ�2)
	//�� ���ڿ��� ���մϴ�. �� ����� ���� ������ ���� ���� return�մϴ�.
	//0 : �� ���ڿ��� ���� �����ϴ�.
	//-1 : ���� �ٸ��ϴ�.

	//���� �Ϲ����� ���� �����δ� ������ �����ϴ�
	//���ڿ�1 < ���ڿ�2�� ��� ���� 
	//���ڿ�1 > ���ڿ�2�� ��� ���
	//���ڿ�1 == ���ڿ�2�� ���  0

	a 1
	b 2
	c
		//ũ���� ������ ASCII(�ƽ�Ű�ڵ�)�� �������� �Ǵ��մϴ�.
		//ex) "ApplePIE"
		//EX) "applefPIE"
		//�� ���� strcmp�� ���� ��� ���� ����?

		printf("%d\n", strcmp("ApplePIE", "ApplePIE"));

	// �� �Լ��� �뵵? strcmp�� ���� ��� ���� 0�̸� ���ٴ� ���� �̿��ؼ� ���ڿ��� ���� Ȯ�� �뵵 


	// ���� �����
	
	return 0;

}