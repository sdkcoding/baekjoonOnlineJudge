#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> a;
		if (a < 40) {
			a = 40;
		}
		sum += a;
	}
	cout << sum / 5 << '\n';

	return 0;
}