/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int A, B, C, N, sum = 0;
	cin >> A >> B >> C;
	N = (C - A) / B;
	cout << N;
}
*/
/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int M, three, four;
	cin >> M;
	if (M < 3 || M == 5 || M == 6) {
		cout << 0 << endl;
		cout << 0;
	}
	else if (M == 3) {
		cout << 1 << endl;
		cout << 0;
	}
	else if (M == 4) {
		cout << 0 << endl;
		cout << 1;
	}
	else if (M % 4 == 1) {
		cout << 3 << endl;
		cout << (M - 9) / 4;
	}
	else if (M % 4 == 2) {
		cout << 2 << endl;
		cout << (M - 6) / 4;
	}
	else {
		cout << 1 << endl;
		cout << (M - 3 / 4);
	}
}
*/
/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int N, M, ans=0, n, m;
	cin >> N >> M;
	for (n = 1; n < N + 1; n++) {
		for (m = 1; m < M + 1; m++) {
			ans += ((N * M + (n*m)-1) / (n * m));
		}
	}
	cout << ans;
}
*/
/*
#include <iostream>
#include <cstdlib>
using namespace std;
bool cupe(int a1, int a2, int a3, int a4, int a5, int a6) {
	return (a1 + a2 + a3 + a4 + a5 + a6) == 6;
}
int main() {
	int a[55];
	int N, c, ans = 0, a1=1, a2=2, a3=3, a4=4, a5=53, a6=54, b;
	for (int i = 0; i < 55; i++) {
		a[i] = 0;
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> c;
		a[c] = 1;
	}
	ans += cupe(a[a1], a[a2], a[a3], a[a4], a[a5], a[a6]);
	while (a1 < 34) {
		a1 += 4;
		a2 += 4;
		a3 += 4;
		a4 += 4;
		a5 -= 2;
		a6 -= 2;
		ans += cupe(a[a1], a[a2], a[a3], a[a4], a[a5], a[a6]);
	}
	cout << ans;
}
*/
