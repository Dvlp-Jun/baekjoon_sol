#include <iostream>
using namespace std;

int main(void) {
	int t, h, w, n; //���� �� �Է¹޴� ����
	cin >> t;
	for (int k = 0; k < t; k++) {
		cin >> h >> w >> n;
		int count = 0;
		for (int i = 1; i < w; i++) {
			for (int j = 1; j < h; j++) {
				count++;
				if (count == n) {
					if (i < 10) {
						cout << j << 0 << i << endl;
					}
					else {
						cout << j << i << endl;
					}

				}
				
			}
		}
	}
	return 0;
}