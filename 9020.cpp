#include <iostream>
#include <cmath>
using namespace std;

//�ε����� ���ڿ� �����ϰ� �ϱ� ���� 1�� ����.
const int MAX = 100000 + 1;
//�Ҽ� ���θ� ������ ���� �迭
int nums[MAX];

int main(void) {
	int t, n;
	int i = 0;

	//�ش� �ε����� �ش� ���ڸ� ����.
	for (int i = 0; i < MAX; i++) {
		nums[i] = i;
	}

	//�Ҽ��� �ƴϸ� 0���� �ٲ�.
	nums[0] = nums[1] = 0;
	//j�� i*i�� ��� ������ i*i<MAX��� ����
	for (int i = 2; i * i < MAX; i++) {
		//k*i(k<i)������ �Ҽ� �Ǻ��� �����Ƿ� i*i���� ����
		for (int j = i * i; j < MAX; j += i) {
			if (nums[j] != 0) {
				nums[j] = 0;
			}
		}
	}


	//���� Ƚ�� ���� t
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n;
		//2�� ���� ���� �Ҽ���� ���� ���� ���� �� �̹Ƿ�
		//�� ���� ��� �ϰ� ���� �������� �Ѿ.
		if (nums[n / 2] != 0) {
			cout << n / 2 << ' ' << n / 2 << '\n';
		}
		else {
			//�� ���� ���̰� �ּ��� �Ҽ��� �� �� ���� i�� ������Ŵ
			while (1) {
				i++;
				if ((nums[n / 2 - i] != 0) && (nums[n / 2 + i] != 0)) {
					break;
				}
			}
			cout << n / 2 - i << ' ' << n / 2 + i << '\n';;
		}
		i = 0;
	}

	return 0;
}