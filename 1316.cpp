#include <iostream>
#include <string>
using namespace std;
//����: https://jaynamm.tistory.com/entry 
int main() {
	string word;
	int n;
	cin >> n;
	int count = 0;
	
	for(int i= 0; i< n; i++){
		cin >> word;
		bool yes = true;
		for(int j = 0; j< word.length();j++){
			for(int k =0; k< j;k++){
				//word[j]!=word[j-1]&&word[j]==word[k]
				//���� index���� �ٸ� ���߿�  
				//0���� index������ 
				//�ڽŰ� ������ �ִٸ� �׷�ܾ �ƴ�. 
				if(word[j]!=word[j-1]&&word[j]==word[k]){
					yes = false;
				}
			}
		}
		if(yes){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
