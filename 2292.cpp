#include <iostream>
using namespace std;

int main(void) {
	int x;
	cin >> x;
	int count = 0;
	
	//�찡 2���� �����ϱ� ������ sum�� 2���� ����
	for (int sum = 2; sum <= x; count++) {
		//������ 6���̹Ƿ� 1�� �������� �ѷ��δ� ������ ���� 6�� �������� ����.
		//�� ���� ���ϴ� x�� �ִ�� �������� ���� count ���� �̵��ϴ� ĭ�� ��. 
		sum += 6 * count;
	}
	
	if (x == 1) count = 1;
	
	cout << count;

	return 0;
}
