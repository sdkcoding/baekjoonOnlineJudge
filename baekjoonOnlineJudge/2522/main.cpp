#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < (2 * n) - 1; i++) {
		if (i < n) {
			for (int j = 0; j < (n - 1) - i; j++) {
				cout << ' ';
			}
			for (int z = 0; z < i + 1; z++) {
				cout << '*';
			}
		}
		else {
			for (int j = 0; j < i - (n - 1); j++) {
				cout << ' ';
			}
			for (int z = 0; z < (2 * n) - (i + 1); z++) {
				cout << '*';
			}
		}
		cout << '\n';
	}

	return 0;
}