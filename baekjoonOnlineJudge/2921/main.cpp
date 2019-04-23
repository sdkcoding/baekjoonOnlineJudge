#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;
	int a = 1, b = 0, total = 0;
	while (a <= n) {
		while (b <= a) {
			total += (a + b);
			b++;
		}
		a++;
		b = 0;
	}
	cout << total << '\n';
	return 0;
}