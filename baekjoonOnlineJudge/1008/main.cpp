#include <limits>
#include <iostream>

using namespace std;
typedef std::numeric_limits< double > dbl;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	double a, b;

	cin >> a >> b;

	cout.precision(dbl::max_digits10);
	cout << fixed << a / b << '\n';

	return 0;
}