#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdlib.h>
#include <sstream>
using namespace std;
/*
* ����
* 1. ���ڿ� ���ڰ� �����ִ� ���ڿ� �� ���� ���� �� �ڿ����� ����
* 2. ���� �ڿ����� ����� ���� ���

* STUDY
* sizeof: �޸� �������� �Ҹ��ϴ� �޸� ũ�� ���(����Ʈ ����)
* length : ���ڿ� ���� ��� + ���ڿ��� �迭ó�� ����� �� �ִ�.
* (int) : �ƽ�Ű �ڵ� ������ ����
* stoi : string to int
* std:to_string : int to string
* append : string ���� ���� string �� ����
*/
int q6_my_main(int argc, char** argv) {
	string ran;
	int i, num, e, count=0;
	string input;
	char arr[50];
	string a, b, c, d;
	cin >> input;
	//cout << (int)input[0];
	for (i = 0; i < input.length(); i++) {
		if ((int)input[i] > 47 && (int)input[i] < 58) {
			b = input[i];
			a.append(b);
		}
	}
	cout << a;
	for (i = 1; i <= stoi(a); i++) {
		if (stoi(a) % i == 0) {
			count=count+1;
		}
	}
	cout<< "\n" <<count;
	return 0;
}

int q6_ans_main() {
	//freopen("input.txt", "rt", stdin);
	char a[100];
	int res = 0, cnt = 0, i;
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			res = res * 10 + (a[i] - 48);
		}
	}
	printf("%d\n", res);
	for (i = 1; i <= res; i++) {
		if (res % i == 0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}

