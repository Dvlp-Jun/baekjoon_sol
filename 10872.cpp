#include <iostream>
using namespace std;

int Factorial(int num) {
	//N�� 0�� ��� 1��ȯ
	if (num == 0) {
		return 1;
	}
	//1�� ��� ���̻� ���� ���� �ʵ��� 1 ��ȯ.
	if (num == 1) {
		return 1;
	}
	else {
		return num * Factorial(num - 1);
	}
}

int main(void) {
	int N;
	//�Է� �� ���
	cin >> N;
	cout << Factorial(N) << endl;

	return 0;
}