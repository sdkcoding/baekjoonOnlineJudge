#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	int result;

	cin >> a >> b >> c;
	if ((a * b) > c) {
		result = a * b - c;
	}
	else {
		result = 0;
	}
	cout << result << '\n';

	return 0;
}