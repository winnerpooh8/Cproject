#include <stdio.h>

//�����͸� �̿��� ����ü�� ����غ��ô�.

struct item
{
	int code; //�������ڵ�(�����۽ĺ���)
	char name[30];
	char description[50];

};




int main()
{
	//����ü ������ ����
	//struct ����ü�� *������;
	struct item* item01;

	struct item item02 = { 2, "FBSX-0479","PLUG IN BRIDGE"};
    
    //����ų �ּҰ� ����
	item01 = &item02;

	//�����ͷ� ����Ų ���� ������ ����ü��. �������� �ƴ� ����ü�� -> ���������� �ٲ�� �˴ϴ�.
	//���������� ����Ű�� �ִ� ���� -> �� ����ϰ� �־ �����ϱ� �����ϴ�.
	printf("�ڵ� : %d �̸� : %s %s", item01->code, item01->name, item01->description);


	return 0;
}