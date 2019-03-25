#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	char b;

	cin >> a;
	if (90 <= a && a <= 100) {
		b = 'A';
	}
	else if (80 <= a && a <= 89) {
		b = 'B';
	}
	else if (70 <= a && a <= 79) {
		b = 'C';
	}
	else if (60 <= a && a <= 69) {
		b = 'D';
	}
	else {
		b = 'F';
	}

	cout << b << '\n';
	return 0;
}