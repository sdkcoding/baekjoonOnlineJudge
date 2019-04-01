#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int ch = 100, s = 100;
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a > b) {
			s -= a;
		}
		else if (a < b) {
			ch -= b;
		}
	}

	cout << ch << '\n';
	cout << s << '\n';

	return 0;
}