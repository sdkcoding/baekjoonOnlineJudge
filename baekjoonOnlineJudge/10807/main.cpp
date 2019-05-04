#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int * numList = new int[n];
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		numList[i] = num;
	}

	int v;
	cin >> v;

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (numList[i] == v) {
			count++;
		}
	}

	cout << count << '\n';
	delete[] numList;

	return 0;
}