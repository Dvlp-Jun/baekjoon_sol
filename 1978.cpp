#include <iostream>
using namespace std;

int main(void){
	//�Է� Ƚ�� n�� �� ���ึ�� �Է¹��� �� k 
	int n,k;
	//�Ҽ��� ���� count 
	int count;
	cin >> n;
	//ó���� count�� n���� ���ϰ� �Ҽ��� �ƴ� ������ 1�� ���� ���.  
	count = n;
	for(int i =0; i<n;i++){
		cin >> k;
		//1�� �Ҽ��� �ƴϹǷ� ���ְ� continue 
		if(k==1){
			count--;
			continue;
		}
		//2�� �Ҽ��̱��ϳ� %�� ����� ���� �����Ƿ� ���� ������. 
		if(k==2){
			continue;
		}
		//�׿��� ������ 2���� �ڽ�-1�� ������ %������ ���� �� 0�� �Ǹ� count���� 1�� ����. 
		for(int j=2;j<k;j++){
			if(k%j==0){
				count--;
				//for���� �� �ϸ� -1�� �ƴ� -2,-3�� �� ���� �ְ�
				//���� �� ���� ������ �����Ƿ� break
				break;  
			}
		}
	}
	//�Ҽ��� ���� ���  
	cout << count;
	return 0;
}
