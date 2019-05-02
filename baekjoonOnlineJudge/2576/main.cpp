#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int min = 100;
	int sum = 0;
	int flag = false;
	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2 == 1) {
			sum += n;
			flag = true;
			if (min > n) {
				min = n;
			}
		}
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