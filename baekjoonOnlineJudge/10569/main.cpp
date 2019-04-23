#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int v, e;
		cin >> v >> e;
		cout << 2 + e - v << '\n';
	}


	return 0;
}