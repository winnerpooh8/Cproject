#include <stdio.h>

int main()
{
	int value4[3][3];
	value = 1;

	//패턴 구현
	//value4[i][j]라고 할 때, i가 순차적으로 증가할 때, 값이 추가합니다.
	//                       i가 홀수인 경우에느 j가 마지막 위치부터 첫번째 위치까지 값이 역순으로 증가합니다.
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

	//출력
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
		//-> 방향구현
		for (int i = left; i <= right; i++)
		{
			value5[top][i] = value++;

		}
		top++;

		// 오른쪽 방향구현
		for (int i = top; i <= bottom; i++)
		{
			value5[i][right] = value++;

		}
		right--;
		//아래방향
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
	




