#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int k = n * 2 - 1;
	int g = 0;
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < g; j++) {
			cout << ' ';
		}
		for (int z = 0; z < k; z++) {
			cout << '*';
		}
		if (i < n - 1) {
			k -= 2;
			g++;
		}
		else {
			k += 2;
			g--;
		}
		cout << '\n';
	}

	return 0;
}