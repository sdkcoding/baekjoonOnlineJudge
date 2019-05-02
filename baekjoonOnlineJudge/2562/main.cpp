#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 9; i++) {
		cin >> n;
		if (max < n) {
			max = n;
			maxIndex = i + 1;
		}
	}

	cout << max << '\n';
	cout << maxIndex << '\n';
	return 0;
}