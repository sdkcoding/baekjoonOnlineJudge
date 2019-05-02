#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	int sum = 0;
	int* numCount = new int[100]{ 0 };

	for (int i = 0; i < 10; i++) {
		cin >> a;
		sum += a;
		numCount[a / 10]++;
	}

	cout << sum / 10 << '\n';
	int max = 0;
	int maxIndex;
	for (int i = 0; i < 100; i++) {
		if (max < numCount[i]) {
			max = numCount[i];
			maxIndex = i;
		}
	}

	cout << maxIndex * 10 << '\n';
	delete[] numCount;
	return 0;
}