#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

struct user
{
	char id[40]; //ex sample12@naver.com
	char pw[50]; //ex koreaedu1384!@
	char gender; //'M','F'

};
//위의 구조체 user를 이용해 다음과 같은 출력 화면을 완성하세요

struct user
{
	char id[40];
	char pw[50];
	char gender;

};


//아이디를 입력해주세요 : sample12@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@
//성별을 입력해주세요(M,F) : M
//아이디를 입력해주세요 : sample13@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@
//성별을 입력해주세요(M,F) : M
//아이디를 입력해주세요 : sample14@naver.com
//비밀번호를 입력해주세요 : koreaedu1384!@
//성별을 입력해주세요(M,F) : M 

//유저테이블
//===========================================
//1. sample12@naver.com koreaedu1384!@  M
//2. sample13@naver.com koreaedu1384!@  F
//3. sample14@naver.com koreaedu1384!@  M
//===========================================

int main()
{
    //같은 데이터의 반복 -> 배열 for분 접근하기 너무 좋다
    struct user users[3];

    for (int i = 0; i < 3; i++)
    {
        printf("아이디를 입력해주세요 : ");
        scanf("%s", users[i].id);
        printf("비밀번호를 입력해주세요 : ");
        scanf("%s", users[i].pw);
        printf("성별을 입력해주세요(M,F) : ");
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

    // 사용자 정보 입력
    for (i = 0; i < 3; i++) {
        printf("아이디를 입력해주세요 : ");
        scanf("%s", users[i].id);
        printf("비밀번호를 입력해주세요 : ");
        scanf("%s", users[i].pw);
        printf("성별을 입력해주세요(M,F) : ");
        scanf(" %c", &users[i].gender); // %c 앞의 공백은 남은 개행 문자를 소비하기 위해 필요
    }

    // 사용자 테이블 출력
    printf("\n유저테이블\n");
    printf("===========================================\n");
    for (i = 0; i < 3; i++) {
        printf("%d. %s %s  %c\n", i + 1, users[i].id, users[i].pw, users[i].gender);
    }
    printf("===========================================\n");

    return 0;
}
















