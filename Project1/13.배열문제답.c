#include <stdio.h>

int main()
{
	int value4[3][3];
	value = 1;

	//���� ����
	//value4[i][j]��� �� ��, i�� ���������� ������ ��, ���� �߰��մϴ�.
	//                       i�� Ȧ���� ��쿡�� j�� ������ ��ġ���� ù��° ��ġ���� ���� �������� �����մϴ�.
	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				value4[i][j] = value++;
			}
		}
		else
		{
			value4[i][j] = value++;
		}

	}

	//���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", value3[j][i]);
		}
		printf("\n");
	}








	int value5[3][3];
	value = 1;

	int bottom = 2;
	int left = 0;
	int right = 2;


	for (int arrys 0; arrys < sizeof(value5) / sizeof(int)) - 1; arrays++)
	{
		//-> ���ⱸ��
		for (int i = left; i <= right; i++)
		{
			value5[top][i] = value++;

		}
		top++;

		// ������ ���ⱸ��
		for (int i = top; i <= bottom; i++)
		{
			value5[i][right] = value++;

		}
		right--;
		//�Ʒ�����
		for (int i = right; i <= left; i++)
		{
			value5[bottom][i] = value++;
		}
		left++;


		for (int i = bottom; >= top; i--)
		{
			value5[i][left] = value++;

		}
		bottom--;

		return 0;
}
	




