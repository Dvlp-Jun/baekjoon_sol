#include <iostream>
using namespace std;

int main(){
	unsigned int a, b, c;
	cin >> a >> b >> c;
	if(b>=c){
		cout << -1 << endl;
		return 0;
	}
	int margin = c-b;
	cout << (a+b < margin*(a/margin) ? a/margin : (a/margin)+1) << endl;
	/*
	//������ ����ϹǷ� �ð��� �����ɸ� 
	int count = 0;
	while(1){
		sum = (c-b)*count-a;
		if(sum>0){
			break;
		}
		count++;
	}
	cout << count;
	*/
	return 0;
}
