#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

struct user
{
	char id[40]; //ex sample12@naver.com
	char pw[50]; //ex koreaedu1384!@
	char gender; //'M','F'

};
//���� ����ü user�� �̿��� ������ ���� ��� ȭ���� �ϼ��ϼ���

struct user
{
	char id[40];
	char pw[50];
	char gender;

};


//���̵� �Է����ּ��� : sample12@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@
//������ �Է����ּ���(M,F) : M
//���̵� �Է����ּ��� : sample13@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@
//������ �Է����ּ���(M,F) : M
//���̵� �Է����ּ��� : sample14@naver.com
//��й�ȣ�� �Է����ּ��� : koreaedu1384!@
//������ �Է����ּ���(M,F) : M 

//�������̺�
//===========================================
//1. sample12@naver.com koreaedu1384!@  M
//2. sample13@naver.com koreaedu1384!@  F
//3. sample14@naver.com koreaedu1384!@  M
//===========================================

int main()
{
    //���� �������� �ݺ� -> �迭 for�� �����ϱ� �ʹ� ����
    struct user users[3];

    for (int i = 0; i < 3; i++)
    {
        printf("���̵� �Է����ּ��� : ");
        scanf("%s", users[i].id);
        printf("��й�ȣ�� �Է����ּ��� : ");
        scanf("%s", users[i].pw);
        printf("������ �Է����ּ���(M,F) : ");
        scanf(" %c", &users[i].gender);




    }

    for (int i = 0; i < 3; i++)
    {
        printf("% d. % s %s %c \n", i + 1, users[i].id, users[i].pw, users[i].gender);
    }
	return 0;
}















#include <stdio.h>

struct user {
    char id[40];   // ex: sample12@naver.com
    char pw[50];   // ex: koreaedu1384!@
    char gender;   // 'M','F'
};

int main() {
    struct user users[3];
    int i;

    // ����� ���� �Է�
    for (i = 0; i < 3; i++) {
        printf("���̵� �Է����ּ��� : ");
        scanf("%s", users[i].id);
        printf("��й�ȣ�� �Է����ּ��� : ");
        scanf("%s", users[i].pw);
        printf("������ �Է����ּ���(M,F) : ");
        scanf(" %c", &users[i].gender); // %c ���� ������ ���� ���� ���ڸ� �Һ��ϱ� ���� �ʿ�
    }

    // ����� ���̺� ���
    printf("\n�������̺�\n");
    printf("===========================================\n");
    for (i = 0; i < 3; i++) {
        printf("%d. %s %s  %c\n", i + 1, users[i].id, users[i].pw, users[i].gender);
    }
    printf("===========================================\n");

    return 0;
}
















