#include <iostream>
using namespace std;

int main (void){
	int n;
	int i = 2;
	cin >> n;
	//n�� 1�� ��� �ƹ� ��µ� ���� �ʰ� ����. 
	if(n == 1){
		return 0;
	}
	
	while(1){
		//n�� 1�̸� �� ���μ����ذ� �Ϸ�� ���̹Ƿ� break 
		if(n==1){
			break;
		}
		//i�� 2���� �����Ͽ� n�� i�� ���� �� �ִٸ� �� ���� ����ϰ� �� ���� ����. 
		if(n%i==0){
			cout << i << endl;
			n=n/i;
		}
		//�׷��� �ʴٸ� i�� 1�� ������Ű�� ��� �ݺ� 
		else{
			i++;
		}
	}
	
	return 0;
} 
