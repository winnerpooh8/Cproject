#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	//���׿� ���� ����(�迭)
	//�ڷ��� �迭��[] = {��1,��2��,...};

	// �迭�� �� �ϳ��� �迭��[������ġ]�� ������ �����մϴ�.
	// ���� ��ġ(�ε���)�� 0������ �迭�� �������� ����(����)-1���� �����˴ϴ�.
	int selected[] = { 0,0,0,0,0,0,0,0,0,0,0,0 }; // �ε���0~11���� ���� ��
	
	//[����ȭ��]
	system("title ���� ���� �׽�Ʈ");
	printf("����� �ῡ�� �� �����\n ������ �ΰ��� ���� �ƴ��� �����ϴ�. \n\n ������ ������ �� ����\n ������ �ϰ� �������?\n");
	int select;
	printf("1. �������� ������");
	scanf("%d", &select);
	system("cls"); //�ܼ� �����

	//[1�� ����]
	printf("\t�Ͼ���� ��������\n\t������ �ϴ��� ���δٸ�\n");
	printf("\t1.\"ȭâ�ѵ� ���� ������?\" \n\t������ ����Ѵ�.\n");
	printf("\t2.\"��� ���� �ϵ��� ���� �� ���� ���̾�!\" \n\t�ϴ� ����� ����.");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	system("cls");

	//�ݺ���
	//12�� �ݺ��� �����ϴ� �ڵ�(i�� 0���� �����ؼ� �۾��� ���������� 1�� i�� ����, i�� 12���� �������� �ݺ�)
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[i]

	}

	printf("���ӿ��� �����");
	//12~13��
	if (total >= 12 && total <= 13)
	{
		printf("���Ӱ� ¥���Ѱ� ���� �ٷ��� ȣ����\n");
	}

	else if (total == 24)
	{
		printf("�Ѳ� ��ġ�� �ḵ�ø� ����\n");
	}

	//[2�� ����]
	printf("\t�������� �����ϱ���,\n");
	printf("\t1.�������� ��� ì�� ������.\n");
	printf("\t2.�̸� �غ��ص� �ʰ� ������ ì�� ������. \n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (select == 2)
	{
		selected[1] = 2;
	}
	system("cls");

	//[3�� ����]
	printf("\tó�� �� ������ ��å�Ҷ�n");
	printf("\t1.�Ա��� ������ ����\n ��� ���� ������ �� �� ���Ѵ�.");
	printf("\t2.������ �ѹ� �� ���� �߱� ��´�� ����.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (select == 2)
	{
		selected[2] = 2;
	}
	system("cls");
	//[4������]
	printf("\t�Ϳ��� �ٶ������ �����ٸ�\n");
	printf("\t1.ó�� ���� �����鵵 ��� ģ��ģ��!\n");
	printf("\t2.�Ϳ������ɸ������� �ָ��� ���Ѻ���.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (select == 2)
	{
		selected[3] = 2;
	}
	system("cls");
	//[5�� ����]
	printf("\t�ٶ��� ģ���� �Ǻκ��� ���ٰ� �ϼҿ��� �ߴ� \n");
	printf("\t1.\"�Ǻο� ���� ģȯ�� ��ǰ�� �Ẹ�°� �?\"\n �ذ����� �����Ѵ�.\n");
	printf("\t2.\"�����ڴ�.. ��ؤФФ�\"\n ���� ���Ŀ� �������ش�.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[4] = 1;
	}
	else if (select == 2)
	{
		selected[4] = 2;
	}
	system("cls");
	//[6������]
	printf("\t������� ������ ��� ������ ������ Ȳ���������� ���ٸ� \n");
	printf("\t1.\"���� ������� ������ ������ �Ϳ� �����Ѵ�.\n");
	printf("\t2.\"������ �� �����ڸ��� ã��� ���� �Դ´�.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[5] = 1;
	}
	else if (select == 2)
	{
		selected[5] = 2;
	}
	system("cls");
	//[7�� ����]
	printf("\t�� ������ ���� �´ٸ� ���� ��ȭ �ҽ��� ��´ٸ� \n");
	printf("\t1.\"�츮�� ������ �� �ִµ� ����?\"\n ���������� ����� ����.\n");
	printf("\t2.\"������ ����... ������ �� �������°� �Ƴ�?\" \n\t�̷��� �����Ѵ�.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[6] = 1;
	}
	else if (select == 2)
	{
		selected[6] = 2;
	}
	system("cls");
	//[8�� ����]
	printf("\t������� �� �� �ó����� �����⸦ ������ �ִٸ�?\n");
	printf("\t1.\"�ٰ����� �����⸦ ���� ����� ��ġ�� �ش�.\n");
	printf("\t2.\"�Ҷ� ����Ű�� ������ �׳� ���� ġ���");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[7] = 1;
	}
	else if (select == 2)
	{
		selected[7] = 2;
	}
	system("cls");
	//[9�� ����]
	printf("\t���� ȯ�� ������ ���ϰ� ���� ȸ�ǰ� ���ȴ�.\n");
	printf("\t1.\"�׵��� ���� ���� ���� �͵��� ���������� �����Ѵ�.\n");
	printf("\t2.\"�ٸ� �������� ��� �����ϴ��� ���� ����.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[8] = 1;
	}
	else if (select == 2)
	{
		selected[8] = 2;
	}
	system("cls");
	//[10�� ����]
	printf("\t���� �ڽſ��� ����� �� �´´ٸ� ������ �� �´� ���� ���.\n");
	printf("\t1.\"���� �����ϰ� ������ �ִٴ�..\" \n\t���� �޴´�\n");
	printf("\t2.\"������ �� �´� �������!\" \n\t�ų���.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[9] = 1;
	}
	else if (select == 2)
	{
		selected[9] = 2;
	}
	system("cls");
	//[11�� ����]
	printf("\t���ڸ��� �� �ð��� �Ǿ��µ� ���� ���� ���� ȸ�Ǹ� �غ��ؾ� �Ѵ�.\n");
	printf("\t1.\"ū ���� �ȿ��� ������ ������  �����غ���.\n");
	printf("\t2.\"���� �� �Ĳ��ϰ� ȸ�� �Ȱ��� �غ��Ѵ�.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[10] = 1;
	}
	else if (select == 2)
	{
		selected[10] = 2;
	}
	system("cls");
	//[12�� ����]
	printf("\t���� ü���� ������ ���ǿ� ���ƿ� �ϱ⸦ ���ٸ�\n");
	printf("\t1.\"���ӿ��� �޾��� �ϵ��� �ڼ��ϰ� �����ؼ� ����.\n");
	printf("\t2.\"���ӿ��� �޾��� �������� ���´�. ");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[11] = 1;
	}
	else if (select == 2)
	{
		selected[11] = 2;
	}
	system("cls");


   return 0;
}