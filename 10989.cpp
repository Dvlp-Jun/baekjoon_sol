#include <iostream>
using namespace std;

int nums[10001] = { 0 };
int main(void) {
	//���� ������ 10000�̹Ƿ� ī���� ���� ��� ����.

	//����ȭ�� ��Ȱ��ȭ ��Ű��, cin�� cout ������ ������ �����ν� ����ӵ��� ����.
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int N, temp;;
	cin >> N;
	//ī���� ����
	//���� ���� ���� ��(j) �����ؾ� �Ѵٴ� ����
	//�� ���� j�� ������ִ� �Ͱ� ����.
	//index�� ���� ������ nums�� 10001�迭�� �����
	//�ش� ���� �Է¹����� �ش� index���� 1 ����.
	for (int i = 0; i < N; i++) {
		cin >> temp;
		nums[temp]++;
	}
	
	//0�� �ƴ� ��� �ش� ���� nums�� �ִ� Ƚ����ŭ ���.
	for (int i = 1; i < 10001; i++) {
		if (nums[i] != 0) {
			for (int j = 0; j < nums[i]; j++) {
				cout << i << '\n';
			}
		}
	}

	return 0;
}