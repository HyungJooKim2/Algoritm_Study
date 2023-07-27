/*
* 데이터형
* C언어 출력 타입
%d: 10진수(정수형)     %f: 실수형
%e: 지수형             %o: 8진수
%x: 16진수             %u: 부호없는 10진수
%g: 실수형 자동출력    %p: 포인터의 주소
%c: 하나의 문자로 출력 %s: 문자열
* Method
put(s,ch,등) : 출력하는 함수
get(s) : 입력받는데 사용되는 함수
fget(s) : 사이즈 지정 가능(오버 플로우 방지)
sprintf : 문자열 변수에 텍스트를 저장
snprintf : 버퍼 오버플러우를 방지하기 위해 최대 문자 수를 지정할 수 있음
fprintf : 파일의 텍스트를 출력
strlen : 문자열의 길이를 계산
* 형변환
a = (int)b;
* static library :
* dynamic library :
*/
#define _CRT_SECURE_NO_WARNINGS 
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int sum(int q1, int q2);
int C_01_main(int argc, char* argv[])
{
	/*
	int i;
	float x, y;
	x = 0; y = 0;
	for (i = 0; i < 10000; i++) {
		x = x + 100000;
		y += 100000; //x = x + 1 , x += 1, x++ -> 모두 x에 1씩 더하는 식
	}
	printf("결과값 %.6e\n", x/10000);
	printf("결과값 %.15e\n", y/10000);
	//while (getch()); //bioskey()로 대치 가능
	return 0;
	*/
	/*
	char name[80], temp[80];
	printf("이름이 무엇인가요? : ");
	scanf_s("%s", name, 80); //%s를 쓰려면 입력받을 변수의 메모리 크기를 지정해주어야 한다.
	sprintf_s(temp, 80 ,"제 이름은 %s 입니다..\n", name);
	puts(temp);
	//printf("제 이름은 %s 입니다..\n",name);
	return 0;
	*/
	/*
	int a, b, sum;
	printf("Enter 2 number? : ");
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("\n Sum=%d",sum);
	*/
	//계산기
	double q1 = 0, q2 = 0, q3 = 0;
	double dp = 0;
	char op = 0;

	printf("원하는 연산을 입력하세요 \n");
	scanf("%lf %c %lf", &q1, &op, &q2);

	switch (op)
	{
	case '+': {
		dp = sum(q1, q2);
		break;
	}
	case '-': {
		dp = q1 - q2;
		break;
	}
	case '*': {
		dp = q1 * q2;
		break;
	}
	case '/': {
		dp = (float)q1 / q2;
		break;
	}
	case '!': {
		dp = log(q1) + log(q2);
		break;
	}
	case '@': {
		dp = sqrt(q1) + sqrt(q2);
		break;
	}
	case '^': {
		dp = pow(q1, q2);
		break;
	}
	case ')': {
		dp = ceil(q1) + floor(q2);
		break;
	}
	default: break;
	}
	printf("Result %lf %c %lf = %lf", q1, op, q2, dp);
}

int sum(int q1, int q2) {
	int temp;
	temp = q1 + q2;
	return temp;
}
