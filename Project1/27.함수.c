#include <stdio.h>
//�������� '���� �˰��� 2587�� ��ǥ��2'
//ù��° �ٺ��� �ټ� ��° �ٱ��� ���پ� �ڿ����� �Է��� �� �ֽ��ϴ�.
//�Է��� �Ϸ�� ��� ù°�ٿ��� ����� ����մϴ�/
//��°�ٿ����� �߾� ���� ����մϴ�.

//����� �־��� ��� ���� �� / ���� ������ ǥ���մϴ�.

//�߾� ���� �־��� ���� ũ�� ������� �������� ���, ���� �߾ӿ� �ִ� ���� �ǹ�

//ex)�Է� ���� 10 40 30 60 30 �� ��� (10+ 40+ 30+ 60+ 30) / 5 = 34
//�߾� ���� ����ϴ� ��� 10 30  40 60 �� ��� ���� 30
//���� ������ �����ϴ� �Լ��� ������ ���α׷��� �ϼ��ϼ���.

int avg(int sum, int count)
{
	return (float) sum / count;
	
//�迭 ��ü�� ���� �����ؼ� �߾� �� Ȯ��(�迭 ����)
int center(int* numbers[],int size)
{
	int result =  0; //�߾Ӱ�
	int temp;//�ӽð�

	//��ü Ƚ�� �ݺ�
	for (int i = 0; i < size; i++)
	{
		//i�� �ݺ����Կ� ���� �ݺ��ϴ� ������ ������
		//��ü ������� 1 ���� �������� ����(ó������ ���� ���� ���ϱ� ����)

		for (int j = 0; j < size - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j]; //���� �� ����
				numbers[j] = number[j + 1]; // ������ ����
				numbers[j + 1] = temp; // ������ �Ѱ���

			}

		}

	}

	//������ ���� �� �߾� �� = �迭�� ���� / 2 ��ġ�� �ش��ϴ� ��
	return result = numbers[(int)(size / 2)];
}



void Solution()
{


}

int sum(int numbers[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += number[1];
	}
	return result;

}


int main()
{
	int numbers[5];//���� 5���� ���� �Է�

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d",&numbers[i])
	}
	int sum_value = sum(number, 5);    // �迭�� �� = sum(�迭, �迭����);
	int avg_value = avg(sum_value, 5); //�迭�� ��� avg(��,�迭����);
	int center_value = center(numbers, 5);//�迭�� �߾� �� = center(�迭,�迭����);

	printf("%d\n",avg_value)
	return 0;
}