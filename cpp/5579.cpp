#include <iostream>
using namespace std;

int main(void) {
	int stu_num;
	//�� �л����� Ȯ���ϱ� ���� bool�� �迭. 1���� index�� 1�� �ϱ� ���� 31���� ����.
	//���� �ٸ� ���� ���� �ʵ��� 0���� �ʱ�ȭ.
	bool checked[31] = { 0 };
	
	//�Է��� �޾ư��� �� �л��� �ε����� 1�� �ٲ�.
	for (int i = 1; i <= 28; i++) {
		cin >> stu_num;
		checked[stu_num] = 1;
	}

	//�� ���� ����� ��� ���߱� ���� num ���� ���� �� �������� ���� �л� Ȯ��.
	int num = 0;
	for (int i = 1; i <= 30; i++) {
		
		if (checked[i] == 0) {
			cout << i << endl;
			num++;
		}
		if (num == 2) {
			break;
		}
	}

	return 0;
}