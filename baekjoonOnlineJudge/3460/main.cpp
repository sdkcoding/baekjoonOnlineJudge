#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int digit, count = 0;
		cin >> digit;
		while (digit > 0) {
			if (digit % 2 == 1) {
				cout << count << " ";
			}
			count++;
			digit /= 2;
		}
		count = 0;
		cout << '\n';
	}

	return 0;
}