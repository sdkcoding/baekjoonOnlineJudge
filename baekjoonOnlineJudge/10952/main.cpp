#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a = 0, b = 0;

	while (cin >> a >> b , a && b) {
		cout << a + b << '\n';
	}

	return 0;
}
