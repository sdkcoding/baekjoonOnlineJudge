#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;
	int at, bt;
	cin >> a >> b;
	
	int r = 1;
	if (a > b) {
		at = a; bt = b;
	}
	else {
		at = b; bt = a;
	}
	while (r > 0) {
		r = at % bt;
		at = bt; bt = r;
	}

	cout << at << '\n';
	cout << at * (a / at) * (b / at) << '\n';

	return 0;
}