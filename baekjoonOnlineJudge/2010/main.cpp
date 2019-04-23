#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int k;
	cin >> k;

	int sum = 0;
	sum += k;
	for (int i = 0; i < n - 1; i++) {
		cin >> k;
		sum--;
		sum += k;
	}
	cout << sum << '\n';
	return 0;
}