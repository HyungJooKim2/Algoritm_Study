#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdlib.h>
#include <sstream>
using namespace std;
/*
* 문제
* 1. 문자와 숫자가 섞여있는 문자열 중 숫자 추출 후 자연수를 만듬
* 2. 만든 자연수의 약수의 갯수 출력

* STUDY
* sizeof: 메모리 공간에서 소모하는 메모리 크기 출력(바이트 단위)
* length : 문자열 길이 출력 + 문자열도 배열처럼 사용할 수 있다.
* (int) : 아스키 코드 값으로 변경
* stoi : string to int
* std:to_string : int to string
* append : string 변수 끝에 string 값 삽입
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

