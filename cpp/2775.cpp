#include <iostream>
using namespace std;

//����Լ��� �̿��Ͽ� �ش� ���� ��� ���� ����.
//people_num�� �Ű������� a:��, b:ȣ
//a�� bȣ ����� ���� (a-1��bȣ + a�� b-1ȣ)�� ������� ���� 
int people_num(int a, int b){
	//0ȣ�� �������� �����Ƿ� 0��ȯ 
	if(b==0){
		return 0;
	}
	//0�������� ȣ ��ŭ�� ����� ��� �����Ƿ� b��ȯ 
	else if(a==0){
		return b;
	}
	//�װ� �ƴϸ� ��� �Լ��� �̿��Ͽ� ��� ���� ����. 
	else return people_num(a,b-1)+people_num(a-1,b);
}

int main(void){
	int n, a, b;
	cin >> n;
	for(int i = 0; i< n ; i++){
		cin >> a;
		cin >> b;
		//��� �� �ٹٲ��� �־�� �ϹǷ� �������� endl Ȥ�� \n �ʼ�. 
		cout << people_num(a,b) << endl;
	}
	return 0;
} 
