#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, sum = 0;
	int i = 0;
	while (i < 5) {
		cin >> n;
		sum += n;
		i++;
	}
	cout << sum << '\n';
	return 0;
}