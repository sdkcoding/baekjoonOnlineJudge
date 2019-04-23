#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		cout << "Case " << i + 1 << ": " << a + b << '\n';
	}

	return 0;
}