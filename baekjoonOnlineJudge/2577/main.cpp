#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b,c;
	cin >> a >> b >> c;
	long sum = a * b * c;
	int * numList = new int[10]{ 0 };

	while (sum > 0) {
		numList[(sum % 10)]++;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << numList[i] << '\n';
	}

	delete[] numList;
	return 0;
}