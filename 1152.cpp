#include <iostream>
#include <string>
using namespace std;

int main() {
	string c;
	int count = 0;
	//������ �Է¹ޱ� ���� ���� �Է¹��� getline ���
	getline(cin, c);
	
	//����ִٸ� �ٷ� 0 ��� �� ����. 
	if(c.empty()){
		cout << 0 << endl;
		return 0;
	}
	//������ �ִٸ� count ���� 
	for(int i = 0; i< c.length();i++){
		if(c[i]==' '){
			count++;
		}
	} 
	//index 0�� �����̸� �ܾ ���� ���̹Ƿ� ���� 
	if(c[0]==' '){
		count--;
	}
	//�������� ������ �ƴ϶�� ������ �ܾ ���� �ʾ����Ƿ� ���� 
	if(c[c.length()-1]!=' '){
		count++;
	}
	
	cout << count << endl;
	
	return 0;
} 


