#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;

	cin >> a >> b >> c;
	a += (b + c) / 60;

	cout << a % 24 << " " << (b + c) % 60 << '\n';

	return 0;
}