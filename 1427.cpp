#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int N, temp;;
	vector<int> nums;
	cin >> N;
	
	//�Է� ���� ���ڸ� 1�ڸ��� vecotor�� �߰��մϴ�.
	while (N != 0) {
		nums.push_back(N % 10);
		N /= 10;
	}

	//���� ������ �̿��Ͽ� �������� �����մϴ�.
	for (int i = 1; i < nums.size(); i++) {
		for (int j = 0; j < nums.size()-i; j++) {
			if (nums[j + 1] > nums[j]) {
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	
	//�ٹٲ޾��� ����� �������� �ٹٲ��� ���ݴϴ�.
	for (int i = 0; i < nums.size();i++) {
		cout << nums[i];
	}
	cout << '\n';

	return 0;
}
