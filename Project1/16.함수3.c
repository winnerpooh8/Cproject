#include <stdio.h>
#include <stdarg.h>
//�Լ��� �������� ���� ������ ���� ���� ���� ��� ����ϴ� �ڵ�(��������)

//c���� ���� ���� ����ϴ� �پ���
//1. #include <stdarg.h>�� �ڵ�� �߰��մϴ�.
//2. �Լ��� �Ű�������...�� ���������Դϴ�.
//3. ���������� ���� ���޹��� ���� �� ���� �����ϴ�. �׷��� ó���� �޴� ���� ���� ���� ���� ������
//   �� ���ִ� �����͸� �������ݴϴ�.
//4. va_list�� ���޹��� �������ڸ� ������ ������ �Դϴ�.
//5. va_start(args,count)�� �������ڿ� ���� ó���� �����մϴ�.
//6. va_arg(args,�ڷ���)�� args�κ��� �ϳ��� ���� �������� �� ���� �ڷ������� ����մϴ�.
//7. va_end(args) : �������ڿ� ���� ó���� �����ϰ� ����� �����մϴ�.(���� ���ϸ� ���α׷��� �����ͳ��� �ʼ��� ����)

void printNumber(int count, ...)
{
	va_list args; //���޹��� ���� �������� �����մϴ�.
	va_start(args, count);
	//������κ���, count ������ �۾��� �����մϴ�.
	
	for (int i = 0; i < count; i++)
	{
		printf("%d", va_arg(args, int));
		//va_arg(���� �̸�,�ڷ���)�� ����
		//������ �ִ� �ڷ��� �������� ���� �޾ƿɴϴ�.
	}
	printf("\n");
	va_end(args); //�۾��Ϸ�
}

//���� ���Ǵ� �Ű������� ���ڸ� �˾ƺ��ô�.
//1. ���ڿ��� �޴� ���
void greeting(char* name)
{
	printf("greeting!\n");
	printf("Nice to meet you %s\n", name);
}

//2. �迭�� �޴� ���
// �迭�� ������ ��쿡�� c�� �ڵ������� �迭�� ���̸� Ȯ���� ������ ������ 
// �迭�� ���� �ۼ��ؾ� �մϴ�.

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);

	}
	printf("\n");
}

//�迭�� �ּ��̱� ������,������ ������ ���� �� �ֽ��ϴ�.
//�� �� �߰����� �۾� ���� �״�� ����� �� �ֽ��ϴ�.
void printArrayptr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);

	}
	printf("\n");
}
int main()
{
	printNumber(5,10,20,30,40,50);
	printNumber(3,5,6,7);

	//���ڿ� �ۼ�
	char name[] = "Grace";
	greeting(name);//name�� �迭�̹Ƿ�, �ּ��Դϴ�. ���� &�� ������ �ʽ��ϴ�.

	int arr[] = { 1,2,3,4,5 };
	printArray(arr, 5);
	printArrayptr(arr, 5);


	return 0;
}