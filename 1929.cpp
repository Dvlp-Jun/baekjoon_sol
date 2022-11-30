#include <iostream>
using namespace std;

//key point : �����佺�׳׽��� ü
//index�� ���� ��ġ�ϵ��� 1000001�� �迭 ����
const int MAX = 1000001;
int nums[MAX]={0};


int main(void) {
	int M, N;
	cin >> M >> N;
	
	//�� �迭�� �ش��ϴ� ���� �Է�
	
	nums[0] = nums[1] = -1;
	for (int i = 2; i * i <= MAX; i++) {
		if (nums[i] == 0) {
			for (int j = i * i; j < MAX; j += i) {
				if (nums[j] == 0) {
					nums[j] = -1;
				}
			}
		}
	}
	for (int i = M; i <= N; i++) {
		if (nums[i]==0) {
			cout << i << '\n';
		}
	}

	return 0;
}