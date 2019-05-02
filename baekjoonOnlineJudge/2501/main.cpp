#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;

	cin >> a >> b;
	
	int count = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			count++;
			if (count == b) {
				cout << i << '\n';
			}
		}
	}
	if (count < b) {
		cout << 0 << '\n';
	}

	return 0;
}