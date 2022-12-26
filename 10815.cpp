#include <iostream>
#include <algorithm>
using namespace std;

//algorithm ��� ������ �̿��Ͽ� ���� ��, ����Ž�� Ȱ��
//���ϴ� num�� nums�� �߾Ӱ��̶�� 1 ��ȯ
//�ƴ϶��,
//nums�� ���� �� ũ�ٸ� ���� ���ߵ��� end�� mid-1�� ����
//�ƴ϶�� start�� mid+1�� �����ϸ鼭 ���� ���ϴ� num�� ����
int nums[500001];
int Binary_S(int num, int N) {
	int start = 0;
	int end = N - 1;
	int mid;
	while (start <= end) {
		mid = (start + end) / 2;
		if (nums[mid] == num) {
			return 1;
		}
		else if (nums[mid] > num) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return 0;
}

int main(void) {
	int N, M, temp;

	//�ð��ʰ������� ���ֱ� ���� ���
	ios_base::sync_with_stdio(0); cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		nums[i] = temp;
	}

	sort(nums, nums + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		cout << Binary_S(temp, N) << ' ';
	}
	cout << '\n';

	return 0;
}