#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int m, n;

	cin >> m >> n;
	
	int a = 2;
	int sum = 0;
	int min = 0;
	bool flag = false;
	for (int i = m; i <= n; i++) {
		while (a < i) {
			if (i % a == 0) {
				break;
			}
			a++;
		}
		if (a == i) {
			sum += i;
			if (!flag) {
				min = i;
				flag = true;
			}
		}
		a = 2;
	}
	if (flag) {
		cout << sum << '\n';
		cout << min << '\n';
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}