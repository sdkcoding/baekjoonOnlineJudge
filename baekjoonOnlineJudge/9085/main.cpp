#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		int sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int s;
			cin >> s;
			sum += s;
		}
		cout << sum << '\n';
		sum = 0;
	}

	return 0;
}