#include <iostream>
using namespace std;

int main(void){
	int n, diff; //�Է¹޴� ���� n , �ٿ��� �� ��°�� ��ġ�ϴ��� ���ϱ� ���� diff 
	int line = 0;//n�� ��ġ�� �� ��ȣ 
	int end = 0;//line������ ��� ĭ ���� 
	int top, bottom; //���� , �и� 
	cin >> n;
	
	//�밢��(/)���� ���������� �� ��° �ٿ� �ִ� �� Ȯ�� 
	while(n>end){
		line += 1; 
		end +=line;  //1 + 2 + 3 + ... line�� �������ν� ��� ĭ�� ���� / �ٸ� ���δ� �� line�� ������ index 
	}
	
	diff = end - n; // �� line�� ������ �󸶳� ������ �ִ°�. ������ ������ ������ ������ �м��� ����. 
	//line�� ¦���� ���ۿ��� �������� ���鼭
	//�и�-- ����++ / Ȧ���� �и�++ ����--�� ��Ģ�� ������ ����
	if(line%2==0){
		top = line - diff; //���ڴ� line���� diff��ŭ �� ��
		bottom = diff + 1; 
	} 
	else{
		top = diff + 1;
		bottom = line - diff;
	}
	cout << top << "/" << bottom << endl;
	return 0;
}
