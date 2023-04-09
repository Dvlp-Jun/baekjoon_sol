#include <iostream>
#include <cmath>
using namespace std;

//�ϳ���
void hanoi(int n, int start, int to, int thru) {
	if (n == 1) {
		cout << start << " " << to << '\n';
	}
	else {
		hanoi(n-1, start, thru, to);
		cout << start << " " << to << '\n';
		hanoi(n - 1, thru, to, start);
	}
}
int main() {
	int n;
	cin >> n;
	cout << int(pow(2, n)) - 1 << '\n';
	hanoi(n,1,3,2);
	//�ϴ�3��°
	//�ȵǸ� 2��°
	//������ 3��°�� ��ĭ����
	//ùĭ�� ������
	//2��° ĭ���� �õ�
	
	return 0;
}