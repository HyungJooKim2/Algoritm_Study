#include <iostream>
using namespace std;
/*
* ����
* �ڿ��� N M�� �Է¹��� �� N������ M�� ����� ���� ���
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