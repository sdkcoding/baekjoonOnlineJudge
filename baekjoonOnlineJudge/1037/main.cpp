#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int *num = new int[n]{0};

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int maxIndex = 0;
	int minIndex = 0;
	for (int i = 1; i < n; i++) {
		if (num[i] > num[maxIndex]) {
			maxIndex = i;
		}
		if (num[i] < num[minIndex]) {
			minIndex = i;
		}
	}
	
	cout << num[minIndex] * num[maxIndex] << '\n';
	delete[] num;
	
	return 0;
}