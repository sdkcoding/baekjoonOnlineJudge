#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;

	cin >> a;

	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		cout << "Case #" << i + 1 << ": " << b + c << '\n';
	}
	
	return 0;
}