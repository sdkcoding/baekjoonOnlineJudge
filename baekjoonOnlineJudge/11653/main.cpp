#include <iostream>
#include <math.h>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	int i = 2;
	cin >> a;

	while (a > 1) {
		if (a % i == 0) {
			cout << i << '\n';
			a /= i;
		}
		if (a % i != 0) i++;
	}
	return 0;
}