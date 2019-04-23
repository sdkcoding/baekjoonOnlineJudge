#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	int k = 1;
	int g = n * 2 - 2;
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < k; j++) {
			cout << '*';
		}
		for (int z = 0; z < g; z++) {
			cout << ' ';
		}
		for (int j = 0; j < k; j++) {
			cout << '*';
		}
		if (i < n - 1) {
			k++;
			g -= 2;
		}
		else {
			k--;
			g += 2;
		}
		cout << '\n';
	}

	return 0;
}