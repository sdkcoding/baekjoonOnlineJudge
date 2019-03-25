#include <limits>
#include <iostream>

using namespace std;
typedef std::numeric_limits< double > dbl;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	double b;
	char d;

	cin >> a;
	cout.precision(2);
	for (int i = 0; i < a; i++) {
		cin >> b;
		do {
			d = cin.get();
			if (d != ' ' && d != '\n') {
				switch (d) {
				case '@': b *= 3; break;
				case '%': b += 5; break;
				case '#': b -= 7; break;
				}
			}
		} while (d != '\n');
		cout << fixed << b << '\n';
	}

	return 0;
}