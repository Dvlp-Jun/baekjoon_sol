#include <iostream>
#include <string>
#include <vector>
using namespace std;
//���� : https://cryptosalamander.tistory.com/15 
int main() {
	//ũ�ξ�Ƽ�� ���ĺ��� vector�� ���� 
	vector<string> croat = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	int idx;
	string str;
	cin >> str;
	
	//������ ���ĺ��� ���ڿ����� ã��
	//�� ���� ������ # ���� �ٲ��ִ� ���� 
	//�ܾ��� ������ �߿��ϱ� ������ 
	//ex) c=�� �׳� # �ϳ��� �ٲپ� ���� ���� ��. 
	for(int i = 0; i<croat.size();i++){
		while(1){
			idx = str.find(croat[i]);
			if(idx == str.npos){
				break;
			}
			str.replace(idx,croat[i].length(),"#");
		}
	}
	//�׷��� �ٲ� ���ڿ��� ���� ��� 
	cout << str.length() << endl;
	
	return 0;
}
