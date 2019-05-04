#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;

	int minHbgPrice = 2000;
	int minDnkPrice = 2000;
	for (int i = 0; i < 3; i++) {
		cin >> a;
		if (a < minHbgPrice) {
			minHbgPrice = a;
		}
	}

	for (int i = 0; i < 2; i++) {
		cin >> a;
		if (a < minDnkPrice) {
			minDnkPrice = a;
		}
	}

	cout << minHbgPrice + minDnkPrice - 50 << '\n';

	return 0;
}