#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int z = n - i; z > 0; z--) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}