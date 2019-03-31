#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;

	cin >> a >> b;
	while (a != b) {
		if (b % a == 0) {
			cout << "factor" << '\n';
		}
		else if (a % b == 0) {
			cout << "multiple" << '\n';
		}
		else {
			cout << "neither" << '\n';
		}
		cin >> a >> b;
	}

	return 0;
}