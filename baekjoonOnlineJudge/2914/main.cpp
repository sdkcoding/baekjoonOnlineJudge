#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;

	cin >> a >> b;

	cout << a * (b - 1) + 1 << '\n';

	return 0;
}