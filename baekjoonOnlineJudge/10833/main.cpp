#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int a, b;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a > b) {
			sum += b;
		}
		else {
			sum += (b%a);
		}
	}
	cout << sum << '\n';

	return 0;
}