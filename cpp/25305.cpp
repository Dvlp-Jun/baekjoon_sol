#include <iostream>
using namespace std;

int main(void) {
	int nums[1000];
	int N, k, temp;
	cin >> N >> k;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		nums[i] = temp;
	}

	//��������
	//�ڽ��� ������ ��� ���ĵǾ� �ִٰ� �����ϰ�
	//������ �ڽź��� ũ�� �ٲٴ� ������ �ݺ�.
	//��������� �ڽ��� �־���ϴ� ������ ��ġ�� ���鼭 ������ ����ؼ� ���ĵ� ���� ����.
	//0�� ���ĵ� �����̹Ƿ� i�� 1���� ����.
	for (int i = 1; i < N; i++) {
		//i-1������ ������ �� �����̹Ƿ� j=i-1�� �ΰ�, 
		//������ ���� ���� j+1�� ���ϸ� j+1���� ���Ľ�Ŵ.
		for (int j = i-1; j >= 0; j--) {
			if (nums[j] > nums[j + 1]) {
				temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
			}
			else {
				break;
			}
		}
	}

	cout << nums[N - k] << '\n';

	return 0;
}
