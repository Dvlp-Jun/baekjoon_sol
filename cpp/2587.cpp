#include <iostream>
using namespace std;

int main(void) {
	int nums[5];
	int temp;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> temp;
		nums[i] = temp;
		sum += temp;
	}

	//�������� �ڽ��� ���ʰ� ���Ͽ� ������ ũ�� ��ġ �ٲ�.
	//ū ���� �� �ڿ������� ���̴� ���̹Ƿ� j < 5-i �� ���.
	for (int i = 0; i < 5; i++) {
		for (int j = 1; j < 5-i; j++) {
			if (nums[j - 1] > nums[j]) {
				temp = nums[j - 1];
				nums[j - 1] = nums[j];
				nums[j] = temp;
			}
		}
	}
	
	cout << sum / 5 << '\n';
	cout << nums[2] << endl;

	return 0;
}