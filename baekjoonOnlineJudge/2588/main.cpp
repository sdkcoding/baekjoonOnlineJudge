#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;

	cin >> a >> b;

	cout << a * ((b / 1)  % 10) << '\n';
	cout << a * ((b / 10) % 10) << '\n';
	cout << a * ((b / 100)% 10) << '\n';
	cout << a * b << '\n';

	return 0;
}