#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	return 0;
}

typedef void(*server_connection)(char* id, int pw);

void connet_SERVER(server_connection callback);
void on _server_connected(char* id, int pw);
void Login()
void setting(server_connection)
void on Login()
char name[20]; //프로그램에서 사용할 아이디 이름
int pw;        //프로그램에서 사용할 비밀번호

char id[] = "abc1234"; //확인용 아이디
int pass = 12345; //확인용 비밀번호

server_connection sc = NULL;

int main(); { ... }

void connect_SERVER(server_connection callback)
{
	if (callback)
	{
		on_server_connected();
	}
	else
	{
		on_server_disconnetted();
	}
}

void connet_SERVER(server_connection callback)
{
}

void on _server_connected(char* id, int pw)
{
	return void on();
}

void Login
{
	printf("아이디를 입력합니다.");
    scanf("%s", name);
	printf(" 비밀번호를 입력합니다.");
	scanf("%d", &pw);

	if (name == id && pw == pass)
	{
		setting(fp)

	}

}

void setting(server_connection fp)
{
	sc = fp;
}

void onLogin(char* id, int pw)
{
	if (name == uid,id) == 0 && upass = pw)
	{
		printf("success");
	}
	else
	{
	    sc = NULL;
		printf("fail");
	} 
}