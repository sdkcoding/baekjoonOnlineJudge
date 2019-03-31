#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	int a, b, c, r;
	int prize, max = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		if ((a == b) && (b == c) && (c == a)) {
			r = a;
			prize = 10000 + r * 1000;
		}
		else if ((a == b) || (b == c) || (c == a)) {
			if (a == b) {
				r = a;
			}
			else if (b == c) {
				r = b;
			}
			else {
				r = c;
			}
			prize = 1000 + r * 100;
		}
		else {
			if (((a < b) && (b < c)) || ((a > b) && (a < c))) {
				r = c;
			}
			else if (((a < c) && (c < b)) || ((a > c) && (a < b))) {
				r = b;
			}
			else if (((b < c) && (c < a)) || ((b > c) && (b < a))) {
				r = a;
			}
			prize = r * 100;
		}

		if (max < prize) {
			max = prize;
		}
	}
	
	cout << max << '\n';

	return 0;
}