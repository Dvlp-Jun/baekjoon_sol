#include <iostream>
#include <string>
using namespace std;

//���� : FILO(First In, Last Out)������, �ù� �������� ������ �ϰ� �մϴ�.
//������ ���� ���� �������� ���� ���ڰ� ���� ���� ���������� ����� �����ϱ� �����Դϴ�.
class Stack {
	//private ������ �����Ϳ� �������� ũ�⸦ �˷��ִ� _size����
private:
	int data[10001];
	int _size;
public:
	Stack() {
		_size = 0;
	}
	//1�� ���� ũ�� ������ ����Ƿ� �׳� return(�Լ�����)
	void push() {
		int temp;
		if (_size >= 10000) {
			return;
		}
		//�װ� �ƴ϶�� _size �ε����� ���� ��, 1����
		cin >> temp;
		data[_size] = temp;
		_size++;
	}

	//��������� -1 �ƴϸ� _size-1 ���. (������ �ε����� �ϳ� ���̳��Ƿ�). 
	void pop() {
		if (_size <= 0) {
			cout << -1 << '\n';
			return;
		}
		cout << data[_size-1] << '\n';
		_size--;
		if (_size < 0) {
			_size = 0;
		}
	}

	//_size���� ����ϸ� ��.
	void size() {
		cout << _size << '\n';
	}

	void empty() {
		if (_size <= 0) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}

	//pop�� ���������� ������ ��������� -1 ���
	//�ƴ϶�� _size-1 ���.(�� ��ĭ ���)
	void top() {
		if (_size <= 0) {
			cout << -1 << '\n';
		}
		else {
			cout << data[_size-1] << '\n';
		}
	}
};

int main(void) {
	int N;
	Stack stk;
	string cmd;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == "push") { stk.push(); }
		else if (cmd == "pop") { stk.pop(); }
		else if (cmd == "size") { stk.size(); }
		else if (cmd == "empty") { stk.empty(); }
		else if (cmd == "top") { stk.top(); }
	}

	return 0;
}