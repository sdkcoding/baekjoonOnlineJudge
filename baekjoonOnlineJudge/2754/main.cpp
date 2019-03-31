#include <limits>
#include <iostream>
#include <string>

using namespace std;
typedef numeric_limits< double > dbl;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string a;
	double b;

	cin >> a;
	if (a[0] == 'A') {
		b = 4.0;
		if (a[1] == '+') {
			b += 0.3;
		}
		else if (a[1] == '-') {
			b -= 0.3;
		}
	}
	else if (a[0] == 'B') {
		b = 3.0;
		if (a[1] == '+') {
			b += 0.3;
		}
		else if (a[1] == '-') {
			b -= 0.3;
		}
	}
	else if (a[0] == 'C') {
		b = 2.0;
		if (a[1] == '+') {
			b += 0.3;
		}
		else if (a[1] == '-') {
			b -= 0.3;
		}
	}
	else if (a[0] == 'D') {
		b = 1.0;
		if (a[1] == '+') {
			b += 0.3;
		}
		else if (a[1] == '-') {
			b -= 0.3;
		}
	}
	else {
		b = 0.0;
	}

	cout.precision(1);
	cout << fixed << b << '\n';

	return 0;
}