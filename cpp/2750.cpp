#include <iostream>
using namespace std;

int main(void) {
	int nums[1000];
	int N, temp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		nums[i] = temp;
	}
	
	//��������
	//���� ���� ���� ã�Ƽ� �� �պ��� ���ʴ������ ����ִ´�.
	int min;
	for (int i = 0; i < N; i++) {
		//min�� i�� �ε����� �ְ� i+1���� N���� ���Ͽ� 
		//���� �������� i�ε����� ������ ���ذ��� ���Ľ�Ŵ
		min = i;
		for (int j = i + 1; j < N; j++) {
			if (nums[j] < nums[min]) {
				min = j;
			}
		}
		temp = nums[i];
		nums[i] = nums[min];
		nums[min] = temp;
	}

	for (int i = 0; i < N; i++) {
		cout << nums[i] << '\n';
	}


	return 0;
}

