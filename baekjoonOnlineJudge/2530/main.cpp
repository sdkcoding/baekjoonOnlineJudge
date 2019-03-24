#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, d;

	cin >> a >> b >> c >> d;
	int second = c + d;
	b += second / 60;
	a += b / 60;
	cout << a % 24 << " " << b % 60 << " " << second % 60 << '\n';

	return 0;
}