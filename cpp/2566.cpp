#include <iostream>
using namespace std;

int main(void) {
	int m[9][9];
	int max = -1; //�Է¹޴� ���� ������ 0~100 �̹Ƿ� 0���� ���� ������ �ʱ�ȭ
	int col, row; // �ִ��� ��, �� �����͸� ���� ����

	//�� �Է� �ޱ�
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> m[i][j];
			//�Է°� ���ÿ� ū���� ��� max, col, row�� ����
			//���� for���� �� �� �� ��� ���ص� ��!
			if (m[i][j] > max) {
				max = m[i][j];
				col = j+1; //index�� 0���� �����Ƿ� 1�� ������.
				row = i+1; //index�� 0���� �����Ƿ� 1�� ������.
			}
		}
	}
	//��� ���
	cout << max << endl;
	cout << row << " " << col;

	return 0;
}