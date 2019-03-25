#include <iostream>

using namespace std;

char p[200];

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, d = 0;
	char c;
	
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		do {
			c = cin.get();
			if (c != ' ' && c != '\n') {
				for (int j = 0; j < b; j++) {
					p[d++] = c;
				}
			}
		} while (c != '\n');
		cout << p << '\n';
		for (int z = 0; z < d; z++) {
			p[z] = 0;
		}
		d = 0;
	}

	return 0;
}