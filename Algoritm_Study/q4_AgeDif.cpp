#include <iostream>
using namespace std;
/* 
* ����
* N���� ���̰� �Էµ� �� ���� ���̰� ���� ����� ��������� ���� ���

* STUDY
* 
*/
int q4_my_main(int argc, char** argv) {
	int n, i, max, min, sum = 0;
	std::cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	max = arr[0];
	min = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	cout << max - min;
	return 0;
}

int main(int argc, char** argv) {
	int n, i, a;
	int max = -2147000000;
	int min = 2147000000;
	cin>>n;
	cin >> a;
	for (int i = 0; i < n; i++) {
		if (a > max) max = a;
		if (a < min) min = a;
	}
	cout << max - min;
	return 0;
}