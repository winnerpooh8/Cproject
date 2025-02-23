#include <stdio.h> // 입출력 제공
#include <stdarg.h>//가변인자 제공
#include <math.h> //수학기능 제공

int main()
{
	printf("root 4 %.2f\n", sqrt(4));
	//X^ - 2² =2를 풀이하시오.

	double a = 1;
	double b = 2;
	double c = 3;

	float result = Quadformula(a, b, c);
	//힌트 : 2차 방정식을 풀기위해선 근의 공식을 이용해 봅니다.

	int rank= 1;
    printrank();// 1rd
	rank =  2;
	printrank(rank); // 2rd
	rank = 3;
	printrank(rank); //3rd

	//1st,2nd 3nd, 4th, ...21st

	//3. 다음 조건을 만족하는 average를 구현하세요
	float result = average(3, 100, 95, 90); //95.00
	float result2 = average(4,100,95,90,90); //91.25
	//힌트) printf("%.2f,value);를 활용하면 소수점 2자리까지 출력 가능

	//4. 다음 조건을 만족하는 isodd를 구현하세요
	isodd(3); // YES
	isodd(4); // NO
	isodd(5); // YES

	//5. 다음 조건을 만족하는 getprime을 구현하시오.

	for (int i = 1; i <= 10; i++)
	{
		if (getprime(i) == 1)
		{
			print("이 값은 소수입니다.\n");
		}
		else
		{
			printf("이 값은 소수가 아닙니다.\n");
		}

	}

	return 0;
}