#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	int a = 0, b = 0, c = 0;

	int temp = t;
	while (temp > 9) {
		while (temp >= 300) {
			temp -= 300;
			a++;
		}
		while (temp >= 60) {
			temp -= 60;
			b++;
		}
		while (temp >= 10) {
			temp -= 10;
			c++;
		}
	}
	if (temp == 0) {
		cout << a << " " << b << " " << c << '\n';
	}
	else {
		cout << -1 << "\n";
	}

	return 0;
}