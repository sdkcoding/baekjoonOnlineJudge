#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int * num = new int[9] {0};
	int a, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		sum += a;
		num[(a / 10) - 1]++;
	}

	int count = 0;
	int midIndex = 0;
	for (int i = 0; i < 9; i++) {
		if (num[i]) {
			count += num[i];
			if (count >= 3) {
				midIndex = i;
				break;
			}
		}
	}

	cout << sum / 5 << '\n';
	cout << (midIndex + 1) * 10 << '\n';
	delete[] num;

	return 0;
}