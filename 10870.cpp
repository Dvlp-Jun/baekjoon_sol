#include <iostream>
using namespace std;

int Fibonacci(int num) {
	//0��°�� 1��° ���� ���� �ڵ����� �� �� ���� �κ� �̹Ƿ� ����.
	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 1;
	}
	//�� ���� ������ �Ǻ���ġ�� ��ͷ� �����Ͽ� ����.
	else {
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int main(void) {
	int n;
	//�Է� �� ���
	cin >> n;
	cout << Fibonacci(n) << endl;

	return 0;
}