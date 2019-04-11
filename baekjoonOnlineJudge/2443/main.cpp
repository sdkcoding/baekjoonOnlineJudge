#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int z = 0; z < i; z++) {
			cout << ' ';
		}
		for (int j = 0; j < (2 * (n - i)) - 1; j++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}