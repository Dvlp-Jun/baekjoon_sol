#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, m, temp;
	cin >> n >> m;

	//���͸� �̿��� 2���� �迭 �ʱ�ȭ.
	vector<vector<int>> m1(n, vector<int>(m,0));
	vector<vector<int>> m2(n, vector<int>(m,0));

	//�� ��� �Է� ����.
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> temp;
			m1[i][j] = temp;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> temp;
			m2[i][j] = temp;
		}
	}

	//���� ���� �״�� ���.
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << m1[i][j]+m2[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}