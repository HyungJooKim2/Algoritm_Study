#include <iostream>
#include <stdlib.h>
using namespace std;
/*
* 문제
* 주민등록번호를 입력받아 나이, 성별 출력

* STUDY
* 
*/
int q5_my_main(int argc, char** argv) {
	int n, age = 0;
	char arr[20];
	char gender;
	cin.getline(arr, 20);

	if (arr[7] == '1' || arr[7] == '2') {
		char arr2[4] = { '1','9',arr[0],arr[1] };
		int num = atoi(arr2);
		cout << 2019 - num + 1;
	}
	else if (arr[7] == '3' || arr[7] == '4') {
		char arr3[4] = { '2','0',arr[0],arr[1] };
		int num = atoi(arr3);
		cout << 2019 - num + 1;
	}
	if (arr[7] == '2' || arr[7] == '4') {
		gender = 'W';
	}
	else if (arr[7] == '1' || arr[7] == '3') {
		gender = 'M';
	}
	cout << " " << gender;
	return 0;
}

int q5_ans_main() {
	char a[20];
	int year, age;
	scanf("%s", &a);
	if (a[7] == '1' || a[7] == '2') year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	else year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
	age = 2019 - year + 1;
	printf("%d ", age);
	if (a[7] == '1' || a[7] == '3') printf("M\n");
	else printf("W\n");
	return 0;
}