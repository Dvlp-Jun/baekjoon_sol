#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
	int a, b, ra, rb;
	ra = 0;
	rb = 0;
	//���ڸ� ������ �ٲٱ� ���� vector�� �ӽ����� 
	vector<int> num;
	cin >> a >> b;
	while(a!=0){
		//�� �ڸ��� ���Ϳ� �ְ� �ڸ����� ���� 
		num.push_back(a%10);
		a /=10;
	}
	//cmath�� pow�Լ��� �̿��Ͽ� ������ ���� ra����. 
	for(int i = 0;i<num.size();i++){
		ra+=num[i]*pow(10,num.size()-1-i);
	}
	
	//���� ���͸� �ϳ��� �������� �ʱ� ���� clear 
	num.clear();
	//���� ���� �ݺ� 
	while(b!=0){
		num.push_back(b%10);
		b /=10;
	}
	for(int i = 0;i<num.size();i++){
		rb+=num[i]*pow(10,num.size()-1-i);
	}
	//�߰����� ���� ���� ���� ���׿����� ���. 
	cout << (ra>rb ? ra : rb) << endl;
		
	return 0;
}
