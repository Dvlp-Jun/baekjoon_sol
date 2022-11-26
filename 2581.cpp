#include <iostream>
using namespace std;

//�Ҽ� �Ǻ� �Լ� 
bool is_prime(int num){
	if(num==1){
		return false;
	}
	//for���� num���� �ݺ����� �ʰ� ������num�����ϸ� ���� ȿ������ �ڵ�
	//�����ٱ����� �ص� �Ǵ� ������
	//2*4 = 4*2 �ΰ� ó�� ��� �������ʹ� ��ġ�� �ٲ� ���̱� ������
	//������ ���� �������� ����ϴ� ��. 
	for(int j = 2;j<num;j++){
		if(num%j==0){
			return false;
		}
	}
	return true;
}

int main(void){
	int m,n;
	int sum=0;
	int min_prime;
	cin >> m;
	cin >> n;
	min_prime = n;
	//m�� n�� ���� ���� ��� 1�̸� -1
	//�Ҽ��� ��� �� ���� �հ� ���ÿ� �ּڰ�. 
	if(m==n){
		if(m==1){
			cout << -1 << endl;
			return 0;
		}
		else if(is_prime(m)){
			cout << m << endl << m << endl;
			return 0;
		}
	}
	//���� ���� �ƴϸ� for������ sum�� min�� ������ 
	for(int i = m;i<=n;i++){
		if(i==2){
			sum+=i;
			min_prime=i;
			continue;
		}
		if(is_prime(i)){
			sum+=i;
			if(i<min_prime){
				min_prime = i;
			}
		}
	} 
	//���� 0�̸� �Ҽ��� �����ٴ� ���̹Ƿ� -1 ��� 
	if(sum==0){
		cout << -1 << endl;
		return 0;
	}
	//�װ� �ƴϸ� sum�� min_prime��� 
	cout << sum << endl << min_prime << endl;
	return 0;
} 
