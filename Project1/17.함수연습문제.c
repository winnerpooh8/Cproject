#include <stdio.h> // ����� ����
#include <stdarg.h>//�������� ����
#include <math.h> //���б�� ����

int main()
{
	printf("root 4 %.2f\n", sqrt(4));
	//X^ - 2�� =2�� Ǯ���Ͻÿ�.

	double a = 1;
	double b = 2;
	double c = 3;

	float result = Quadformula(a, b, c);
	//��Ʈ : 2�� �������� Ǯ�����ؼ� ���� ������ �̿��� ���ϴ�.

	int rank= 1;
    printrank();// 1rd
	rank =  2;
	printrank(rank); // 2rd
	rank = 3;
	printrank(rank); //3rd

	//1st,2nd 3nd, 4th, ...21st

	//3. ���� ������ �����ϴ� average�� �����ϼ���
	float result = average(3, 100, 95, 90); //95.00
	float result2 = average(4,100,95,90,90); //91.25
	//��Ʈ) printf("%.2f,value);�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��� ����

	//4. ���� ������ �����ϴ� isodd�� �����ϼ���
	isodd(3); // YES
	isodd(4); // NO
	isodd(5); // YES

	//5. ���� ������ �����ϴ� getprime�� �����Ͻÿ�.

	for (int i = 1; i <= 10; i++)
	{
		if (getprime(i) == 1)
		{
			print("�� ���� �Ҽ��Դϴ�.\n");
		}
		else
		{
			printf("�� ���� �Ҽ��� �ƴմϴ�.\n");
		}

	}

	return 0;
}