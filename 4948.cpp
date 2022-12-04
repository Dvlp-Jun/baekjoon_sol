#include <iostream>
#include <cmath>
using namespace std;

//�ε����� ���ڿ� �����ϰ� �ϱ� ���� 1�� ����.
const int MAX = 2*123456 + 1;
//�Ҽ� ���θ� ������ ���� �迭
int nums[MAX];

int main(void) {
	int n;
	int count = 0;

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
			if (nums[j] !=0) {
				nums[j] = 0;
			}
		}
	}

	//�Է��� �޾ư��� n�� 2n������ �Ҽ� ���� Ȯ��.
	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}

		//�Ҽ� �迭�� �̹� ó���߱� ������ �о ���⸸ �ϸ� ��.
		for (int i = n + 1; i <= 2 * n; i++) {
			if (nums[i] != 0) {
				count++;
			}
		}
		//���� ��� �� count 0���� �ʱ�ȭ.
		cout << count << '\n';
		count = 0;
	}
	
	return 0;
}