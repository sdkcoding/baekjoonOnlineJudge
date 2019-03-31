#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int v;
	cin >> v;
	
	string t;
	cin >> t;

	int a = 0, b = 0;
	for (int i = 0; i < v; i++) {
		if (t[i] == 'A') {
			a++;
		}
		else {
			b++;
		}
	}
	if (a > b) {
		cout << 'A' << '\n';
	}
	else if (a < b) {
		cout << 'B' << '\n';
	}
	else {
		cout << "Tie" << '\n';
	}

	return 0;
}