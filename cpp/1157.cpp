#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
	//���ĺ� ������ ������� vector 
	vector<int> num(26);
	
	//�Է��� ���� �迭c /0�� �����ؼ� 1�� ������ 
    char c[1000001];
    cin >> c;
    //������ �𸣰����� strlen�� for������ �ٷ� ������ �ʾƼ� �������. 
    int length = 0;
    length = strlen(c);
    for(int i=0; i<length; i++){
    	//�ҹ��ڸ� a�� �빮�ڸ� A�� ���� index�� ������ �ϴ� ����. 
    	if(c[i] >90){
    		c[i]-='a';
		}
		else{
			c[i]-='A';
		} 
		num[c[i]]++;
	}
    
    //ū �� ã��. 
	int MAX = 0;
	int idx = 0;
	for(int i=0; i<26;i++){
    	if(num[i]>MAX){
    		MAX = num[i];
    		idx = i;
		}
	}
	
	//ū ���� ã�� �������� >�� ���� ������
	//�� ���� index���� ���ų� ū ���� ������ checked�� true�� �ٲپ���. 
	bool checked = false;
	for(int i=idx+1; i<26;i++){
    	if(num[i]>=num[idx]){
    		checked = true;
		}
	}
	//�׿� ���� �� ��� 
	if(checked){
		cout << "?" << endl;
	}
	else{
		char result = idx+'A';
		cout << result << endl;
	}
    
    //���ĺ� ���� vector ����Ͽ� Ȯ���ϴ� �ڵ�. 
    //for(int i=0; i<26;i++){
    //	cout << num[i] << " ";
	//}
    
    return 0;
}
