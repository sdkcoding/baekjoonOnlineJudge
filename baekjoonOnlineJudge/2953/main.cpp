#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		int score;
		for (int j = 0; j < 4; j++) {
			cin >> score;
			sum += score;
		}
		if (max < sum) {
			max = sum;
			maxIndex = i + 1;
		}
		sum = 0;
	}
	
	cout << maxIndex << '\n';
	cout << max << '\n';

	return 0;
}