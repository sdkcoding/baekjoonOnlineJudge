#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	int a, b;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << "You get ";
		cout << a / b;
		cout << " piece(s) and your dad gets ";
		cout << a % b;
		cout << " piece(s)." << '\n';
	}
	return 0;
}