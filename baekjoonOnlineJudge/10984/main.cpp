#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	int n;
	int c, sumc = 0;
	double g, sumg = 0.0;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> c >> g;
			sumc += c;
			sumg += (c*g);
		}
		cout << sumc << " ";
		cout.precision(1);
		cout << fixed << sumg / sumc << '\n';
		sumc = 0; sumg = 0.0;
	}

	return 0;
}