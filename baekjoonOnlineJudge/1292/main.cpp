#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int * numSeq = new int[1000]{ 0 };

	int count = 1;
	int i = 0;
	int s = 0;
	while (i < 1000) {
		while ((i < 1000) && (s < count)) {
			numSeq[i++] = count;
			s++;
		}
		count++;
		s = 0;
	}

	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int i = a - 1; i < b; i++) {
		sum += numSeq[i];
	}

	cout << sum << '\n';
	delete[] numSeq;
	return 0;
}