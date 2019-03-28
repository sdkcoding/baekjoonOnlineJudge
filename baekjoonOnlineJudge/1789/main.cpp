#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	unsigned int a;

	unsigned int i = 1;
	cin >> a;

	while (a >= i) {
		a -= i;
		i++;
	}

	cout << i - 1 << '\n';

	return 0;
}