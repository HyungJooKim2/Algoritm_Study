#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdlib.h>
#include <sstream>
using namespace std;
/*
* 문제
* 1. "bE    au T I fu L" -> 공백 제거, 소문자 변환"
* 2. "beautiful"
* 
* STUDY
* 1.공백 제거
* s.erase(remove(s.begin(), s.end(), ' '), s.end());
* 2.소문자 변환
*/
int q7_my_main(int argc, char** argv) {
	string input;
	cin >> input;
	input.erase(remove(input.begin(), input.end(), ' '), input.end());
	cout << input;
	return 0;
}