#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;

	cin >> a >> b >> c;

	cout << (a + b) % c << '\n';
	cout << (a % c + b % c) % c << '\n';
	cout << (a * b) % c << '\n';
	cout << (a % c * b % c) % c << '\n';

	return 0;
}