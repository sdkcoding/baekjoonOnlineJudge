#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	int a, b, c;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		if ((b - a) > c) {
			cout << "advertise" << '\n';
		}
		else if ((b - a) == c) {
			cout << "does not matter" << '\n';
		}
		else {
			cout << "do not advertise" << '\n';
		}
	}
	
	return 0;
}