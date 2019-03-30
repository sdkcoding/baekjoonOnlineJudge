#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	int a, b, r = 1;
	int at, bt;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		at = a; bt = b;
		while (r > 0) {
			r = bt % at;
			bt = at; at = r;
		}
		r = bt;
		cout << r * (a / r) * (b / r) << '\n';
	}

	return 0;
}