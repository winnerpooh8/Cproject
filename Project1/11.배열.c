#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C������ �迭
//�ڷ��� �迭��[����];

//�迭�� �� ���( : element)�� �ִ� ���
//�迭��[�ε���] = ��
//�ε����� ���� = 0���� �迭�� ���� -1������ ����


//�迭�� ���̸� ���ϴ� ���
//sizeof(�迭��) / (sizeof(�ڷ��);
// 
//�迭�� ũ�⸦ ���ϴ� ���
//sizeof(�迭��);

int main()
{
	int iArray[5]; //0 ~ 4
	int iArray[0] = 1;//iArry�� 0��° ��Ҵ� 1�� �˴ϴ�.
	int iArray[1] = 2;
	int iArray[2] = 3;
	int iArary[3] = 4;
	int iArray[4] = 5;

	printf("�迭 iArry�� ������ �ִ� ��� :");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", iArray[1]);
	}
    printf("\n");


	int size = sizeof(iArray);

	printf("�迭�� ũ�� : %d\n", size);

	int length = sizeof(iArray) / sizeof(int);
	printf("�迭�� ���� : %d\n", length);
	printf("�迭�� �̸� : %p\n", iArray);

	//�迭�� ���� ������ �����͸� ��� ���� �����ϴ� ������ �Դϴ�.
	//�� �迭�� ��Ҵ� ������ �������� �ּҸ� ������ �˴ϴ�.
	//�迭�� ù��° ����� �ּҴ� �迭�� ���� �ּҴ� �迭�� �̸��Դϴ�.
	//�迭�� ����� ���ÿ� �����͸� ������ �������� �޸� ���� ������ ������ �˴ϴ�.
	//�迭�� �����Ǵ� ������, �ּҿ� ���� ������ ������ �� �����ϴ�.(���� �Ұ����� ������)





	return 0;
}