#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int v;
	int c = 0, nc = 0;
	for (int i = 0; i < n; i++) {
		cin >> v;
		if (v) {
			c++;
		}
		else {
			nc++;
		}
	}
	if (c > nc) {
		cout << "Junhee is cute!" << '\n';
	}
	else {
		cout << "Junhee is not cute!" << '\n';
	}

	return 0;
}