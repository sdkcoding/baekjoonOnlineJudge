#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int score;
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> score;
		if (score) {
			sum += (score + count);
			count++;
		}
		else {
			count = 0;
		}
	}
	cout << sum << '\n';
	return 0;
}