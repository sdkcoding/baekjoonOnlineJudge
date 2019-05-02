#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;
	int max = 0;
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a >> b;
		sum = sum - a + b;
		if (max < sum) {
			max = sum;
		}
	}
	
	cout << max << '\n';

	return 0;
}