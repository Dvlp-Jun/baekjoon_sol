#include <iostream>
using namespace std;

int main(void) {
	int a,b,v;
	cin >> a >> b >> v;
	
	//�Ϸ縸�� �ö󰡴� �Ÿ��� �ٷ� 1 ��� �� ���� 
	if((v-a) <=0){
		cout << 1 << endl;
		return 0;
	}
	
	int day = 1; // v-a��ŭ�� ���� a��ŭ ���� �����̹Ƿ� �װ� �����ؼ� day�� 1�� ����. 
	day += (v-a)/(a-b); //v-a��ŭ �Ϸ翡 a-b��ŭ ���Ƿ� ���� ���� ���� day�� ����. 
	//���ߴµ��� �������� �����Ѵٸ�
	//���� ��� �Ϸ翡 4�� ���µ� v-a���� ���� �Ÿ��� 2�� ��¿ �� ���� 4��ŭ �����ϹǷ�
	//day++�� ����. 
	if((v-a)%(a-b)>0){  
		day++;
	}
		
	cout << day;
	
	return 0;
} 
