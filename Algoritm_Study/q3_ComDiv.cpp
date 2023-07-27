#include <iostream>
using namespace std;
/* 
* 문제
* 자연수 N의 진약수의 합을 수식과 함께 출력
* e.g.) 8 -> 1+2+4=7   15 -> 1+3+5=9
* 
*/ 
int main(int argc, char** argv) {
	int n, i, sum = 0;
	std::cin >> n;
	cout << 1;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << "+" << i;
			sum = sum + i;
		}
	}
	cout << "=" << sum + 1;
	return 0;
}