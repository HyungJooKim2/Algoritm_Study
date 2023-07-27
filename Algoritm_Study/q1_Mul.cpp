#include <iostream>
using namespace std;
/*
* 문제
* 자연수 N M을 입력받은 후 N까지의 M의 배수의 합을 출력
* e.g.) 15 3 -> (3+6+9+12+15) -> 45
*/
int main(int argc, char** argv) {
	int n, m, i, sum = 0;
	std::cin >> n >> m;
	for (i = 0; i <= n; i++) {
		if (i % m == 0) {
			sum = sum + i;
		}
	}
	cout << sum;
	return 0;
}