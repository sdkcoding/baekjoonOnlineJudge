#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int s;
		cin >> s;
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int q, p;
			cin >> q >> p;
			s += (q * p);
		}
		cout << s << '\n';
	}

	return 0;
}