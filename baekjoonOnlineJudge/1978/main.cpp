#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;
	int count = 0;
	int b = 2;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a > 1) {
			while (b < a) {
				if (a % b == 0) {
					break;
				}
				b++;
			}
			if (a == b) {
				count++;
			}
			b = 2;
		}
	}
	cout << count << '\n';

	return 0;
}