#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;

	cin >> a >> b;
	
	b -= 45;
	if (b < 0) {
		b += 60;
		a -= 1;
		if (a < 0) {
			a = 23;
		}
	}
	cout << a << " " << b << '\n';

	return 0;
}