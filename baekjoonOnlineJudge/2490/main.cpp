#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 3; i++) {
		int ba = 0;
		int deung = 0;
		for (int j = 0; j < 4; j++) {
			int bit;
			cin >> bit;
			if (bit) {
				deung++;
			}
			else {
				ba++;
			}
		}
		char ch;
		if (ba > 0 && deung > 0) {
			if (ba < deung) {
				ch = 'A';
			}
			else if (ba == deung) {
				ch = 'B';
			}
			else {
				ch = 'C';
			}
		}
		else if (ba == 4) {
			ch = 'D';
		}
		else {
			ch = 'E';
		}
		cout << ch << '\n';
		ba = 0; deung = 0;
	}

	return 0;
}