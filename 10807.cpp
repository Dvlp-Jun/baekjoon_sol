#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	//������ ���� input, �Է¹޴� ���� temp, ���ϴ� ������ ���� count
	int input, temp;
	int count = 0;
	cin >> input;
	//���͸� �̿��Ͽ� ������ ���� ����.
	vector<int> num(input);
	//input��ŭ ���ڸ� �Է� ����.
	for (int i = 0; i < input; i++) {
		cin >> temp;
		num[i] = temp;
	}

	//���ϴ� ���� �Է� �� ���� Ȯ�� �� ���
	cin >> temp;
	for (int i = 0; i < input; i++) {
		if (num[i] == temp) {
			count++;
		}
	}
	cout << count;

	return 0;
}