#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;
	long long sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	cout << sum << '\n';
	return 0;
}