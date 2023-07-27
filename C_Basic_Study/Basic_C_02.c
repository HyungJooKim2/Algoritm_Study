#define _CRT_SECURE_NO_WARNINGS 
#define MAX 13
#define STRINGLEN 21
#define PAGE 20
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"
#include <conio.h>

int C02_main(int argc, char* argv[])
{
	/*
	//1. 2의 거듭제곱 값 출력
	int i;
	int arr[MAX + 1];
	arr[0] = 2;
	i = 1;
	while (i <= MAX) {
		arr[i] = arr[i - 1] * 2;
		i = i + 1;
	}
	i = 0;
	while (i <= MAX) {
		printf("%d\n", arr[i]);
		i = i + 1;
	}
	return 0;
	*/
	/*
	//2. 100까지 홀수만 합
	int i;
	int sum = 0;

	for (i = 1; i < 100; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
	printf("sum= %d", sum);
	return 0;
	*/
	/*
	//3. 난수 발생
	int i;
	srand(time(NULL));
	i = rand() % 100;
	printf("sum= %d", i);
	return 0;
	*/
	//4. 하다 말았음
	/*
	char baeyul[4];
	char a = 'w';
	int i;

	for (i = 0; i <= 3; i++) {
		baeyul[i] = a;
		printf("\n baeyul[%d] ==> %c = %d", i, baeyul[i], baeyul[i]);
		++a;
	}
	printf("\n Baeyul Sijak Juso .. %x -> %p Bunji", )
	*/
	/*
	//5 배열, 포인터
	char chararray[STRINGLEN+1] ;
	char *str ;
	strcpy(chararray,"Welcome to my world!");
	str=chararray ;
	printf("%S\n", chararray);
	printf("%S\n", str);
	printf("String length of str : %d\n", strlen(str)) ;
	printf("String length of chararray :  %d\n", strlen(chararray)) ;
	printf("str[0]: `%c'\n", str[0]) ;
	printf("str[12]: `%c', chararray[12] '%c'\n", str[12], chararray[12]) ;
	printf("End of str : %d\n", str[strlen(str)]) ;
	*/
	/*
	//6. 아스키 코드 출력
	int i = 32;
	while (i < 127) {
		printf("%d=%c, \n", i, i);
		i++;
	}
	return 0;
	*/
	/*
	//7. 연산 순위 : 연산 순위에 따라 계산됨
	(같은 순위의 경우 오른쪽에서 왼쪽으로 계산함)
	int a;
	a = 5;
	a = a * 2 + 10; // <연산순위 20>
	printf("%d , ", a);
	a = 5;
	a *= 2 + 10; // <60>
	printf("%d\n", a);

	int i = 0;
	while (i++<=10){  //++i -> 값이 먼저 증가하고 작업이 수행됨
		printf("%d\n", i);
	}
	int j= 0;
	for (j= 1; j<= 10; j++){
		printf("%d\n", j);
	}
	*/
	//8. 기탄 수학
	/*
	char op = '+';
	int clip = 1;
	int moffset = 1;
	int page = 1;
	int index = 1;
	int q1[101];
	int q2[101];
	int dap[101];
	float dap1[101];

		int i = 0, j = 0;
		int temp1 = 0, temp2 = 0;
		char c;

		do {
			printf("원하는 연산은 ? +,-,*,/ \n");
			scanf("%c", &op);
		} while (!((op == '+') || (op == '-') || (op == '*') || (op == '/')));

		do {
			printf("연산의 자릿수는? 1~3\n");
			scanf("%d", &temp1);
		} while (!(temp1 <= 3));
		clip = temp1;

		if (clip == 1) moffset = 10;
		else if (clip == 2) moffset = 100;
		else if (clip == 3) moffset = 1000;
		else moffset = 10;

		do {
			printf("몇 페이지를 출력 할까요? 1~5\n");
			scanf("%d", &temp2);
		} while (!(temp2 < 6));

		page = temp2;
		index = page * PAGE;

		srand(time(NULL));

		//답 계산
		for (i = 1; i <= index; i++)
		{
			q1[i] = rand() % moffset;
			q2[i] = rand() % moffset;

			switch (op)
			{
			case '+': dap[i] = q1[i] + q2[i]; break;
			case '-': dap[i] = q1[i] - q2[i]; break;
			case '*': dap[i] = q1[i] * q2[i]; break;
			case '/': dap1[i] = (float)q1[i] / q2[i]; break;
			default: printf("허용되지 않은 연산자입니다..\n"); break;
			}
		}
		// question output routine
		for (i = 1; i <= index; i += 4)
		{
			printf("%6d) %12d) %12d) %12d) \n", i, i + 1, i + 2, i + 3);
			printf("%13d %13d %13d %13d\n", q1[i], q1[i + 1], q1[i + 2], q1[i + 3]);
			printf("%2c%11d %2c%11d %2c%11d %2c%11d\n",
				op, q2[i], op, q2[i + 1], op, q2[i + 2], op, q2[i + 3]);
			printf("============= ");
			printf("============= ");
			printf("============= ");
			printf("============= ");

			if (index % 4 == 0)printf("\n\n\n\n");
		}
		printf(" 답안지 출력을 원하시면 아무키나 누르세요...\n");
		c = _getch();
		printf("========================================= ");
		printf("============= 답안지 ==================== ");
		// answer output routine
		for (i = 1; i <= index; i++)
		{
			if (op == '/') printf("%2d = %5.2f\n", i, dap1[i]);
			else printf("%2d= %8d\n", i, dap[i]);
		}
		*/
	char op = 0;
	int num = 0;
	int page = 0;

	int answer[3] = { 0,0,0 };
	int i = 0;
	printf("원하는 연산은? +,-,*,/\n");
	scanf("%c", &op);
	printf("연산의 자릿수는? 1~3\n");
	scanf("%d", &num);
	printf("몇 문제를 출력 할까요? 1~5\n");
	scanf("%d", &page);


	if (num == 1) {
		for (i = 0; i < page; i++) {
			answer[0] = i + 1;
			answer[1] = rand() % 9;
			answer[2] = rand() % 9;
			printf("%c %d %d %d\n", op, answer[0], answer[1], answer[2]);
		}
	}
	else if (num == 2) {
		for (i = 0; i < page; i++) {
			answer[0] = i + 1;
			answer[1] = rand() % 99;
			answer[2] = rand() % 99;
			printf("%c %d %d %d\n", op, answer[0], answer[1], answer[2]);
		}
	}
	else if (num == 3) {
		for (i = 0; i < page; i++) {
			answer[0] = i + 1;
			answer[1] = rand() % 999;
			answer[2] = rand() % 999;
			printf("%c %d %d %d\n", op, answer[0], answer[1], answer[2]);
		}


	}
}