// BOJ 2527

/*
���簢�� ���� ������ �� �����غ���.
�������� ��ǥ�� �츮���� ���� ��Ʈ�� �ش�.
*/

#include <cstdio>
int main() {
	for (int a, s, d, f, q, w, e, r; ~scanf("%d%d%d%d%d%d%d%d", &a, &s, &d, &f, &q, &w, &e, &r);) {
		if ((a == e || q == d) && (s == r || w == f)) printf("c");
		else if (e < a || d < q || r < s || f < w) printf("d");
		else if (a == e || q == d || s == r || w == f) printf("b");
		else printf("a");
		printf("\n");
	}
}