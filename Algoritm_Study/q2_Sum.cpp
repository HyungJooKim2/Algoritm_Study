#include <iostream>
using namespace std;
/* 
* 문제
* 자연수 A부터 B까지의 합을 수식과 함께 출력
* e.g.) 3 7 -> 3+4+5+6+7=25
*/
int main(int argc, char** argv) {
	int n, m, i, sum = 0;
	std::cin >> n >> m;
	for (i = n; i <= m - 1; i++) {
		cout << i << "+";
		sum = sum + i;
	}
	cout << m;
	cout << "=" << sum + m;
	return 0;
}