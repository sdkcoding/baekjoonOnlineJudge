#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		sum += (a * a);
	}

	cout << sum % 10 << '\n';
	return 0;
}