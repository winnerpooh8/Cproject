#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

/*
1, 1.5f,'a',"abc"
%d  %f  %c   %s
*/




//����ü(struct)
//���� �ڷ����� �������� �ϳ��� ��� ���ο� �ڷ������� ����� ���� �ǹ��մϴ�.(�����ڷ���)
//������� ���Ǵ�� ��� �ϳ��� ���·� ǥ���ϴ� ����̱⿡ ����� ����Ÿ���̶�� �θ��ϴ�.
//�������� ����ȭ �۾��� ������ �� ����ϴ� �������Դϴ�.
//����ȭ : ����Ǿ� �ϳ��� ����� ó���ϴ� ���, ����Ѱ������δ� record(c#),object(java,c++)

/*
struct ����ü��
{
	//����ü�� ������ ���� ������(����)
	int value;
	float f;
	char c;
};
*/

//����ü ���� 
struct student
{
	int number; //�л���ȣ
	char name[10]; //�̸� �ѱ� ���� 4���ڱ���
	char group; //A,B,C,D,E
};
//����ü ������ ���������� �ƴϱ� ������, ����ϱ� ���ؼ� ���� ���� ����� �ʱ�ȭ�� �����ؾ� �մϴ�.

int main()
{
	//����ü ���� �� �ʱ�ȭ ���
	//struct ����ü�� ������ = { ����ü�� ���ǵ� ���� ������� ���� �ۼ��մϴ�.
	struct student s1 = { 1,"Keite", 'A'};

	struct student s2; //����ü ���� ����

	//����ü������.������ = ���� ���� ��������
	s2.number = 2;
	strcpy(s2.name, "Nero"); 
	//���ڿ��� ��ü ������ �Ұ����ϹǷ�,strcpy() �Լ��� ���� �����մϴ�.
	s2.group = 'B';

	struct student s3;

	printf("�й� : ");
	scanf("%d", &s3.number);
	printf("�̸� : ");
	scanf("%s", &s3.name);
	getchar(); //���ڿ� ������ ���ڸ� �ް� ������ getchar()�� ���� ���� ����
	printf("�׷� : ");
	scanf("%c", &s3.group);

	printf("�й� : %d �̸� : %s �׷� : %c\n", s1.number, s1.name, s1.group);
	printf("�й� : %d �̸� : %s �׷� : %c\n", s2.number, s2.name, s2.group);
	printf("�й� : %d �̸� : %s �׷� : %c\n", s3.number, s3.name, s3.group);


	return 0;
}
