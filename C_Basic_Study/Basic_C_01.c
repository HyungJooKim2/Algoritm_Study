/*
* ��������
* C��� ��� Ÿ��
%d: 10����(������)     %f: �Ǽ���
%e: ������             %o: 8����
%x: 16����             %u: ��ȣ���� 10����
%g: �Ǽ��� �ڵ����    %p: �������� �ּ�
%c: �ϳ��� ���ڷ� ��� %s: ���ڿ�
* Method
put(s,ch,��) : ����ϴ� �Լ�
get(s) : �Է¹޴µ� ���Ǵ� �Լ�
fget(s) : ������ ���� ����(���� �÷ο� ����)
sprintf : ���ڿ� ������ �ؽ�Ʈ�� ����
snprintf : ���� �����÷��츦 �����ϱ� ���� �ִ� ���� ���� ������ �� ����
fprintf : ������ �ؽ�Ʈ�� ���
strlen : ���ڿ��� ���̸� ���
* ����ȯ
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
		y += 100000; //x = x + 1 , x += 1, x++ -> ��� x�� 1�� ���ϴ� ��
	}
	printf("����� %.6e\n", x/10000);
	printf("����� %.15e\n", y/10000);
	//while (getch()); //bioskey()�� ��ġ ����
	return 0;
	*/
	/*
	char name[80], temp[80];
	printf("�̸��� �����ΰ���? : ");
	scanf_s("%s", name, 80); //%s�� ������ �Է¹��� ������ �޸� ũ�⸦ �������־�� �Ѵ�.
	sprintf_s(temp, 80 ,"�� �̸��� %s �Դϴ�..\n", name);
	puts(temp);
	//printf("�� �̸��� %s �Դϴ�..\n",name);
	return 0;
	*/
	/*
	int a, b, sum;
	printf("Enter 2 number? : ");
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("\n Sum=%d",sum);
	*/
	//����
	double q1 = 0, q2 = 0, q3 = 0;
	double dp = 0;
	char op = 0;

	printf("���ϴ� ������ �Է��ϼ��� \n");
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
