#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	bool numList[1000] = {false};
	int num;
	int count = 0;
	int idx = 0;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> num;
			numList[num - 1] = true;
		}

		for (int z = 999; z >= 0; z--) {
			if (numList[z]) {
				count++;
				numList[z] = false;
				if (count == 3) {
					idx = z;
				}
			}
		}
		cout << idx + 1 << '\n';
		count = 0;
		idx = 0;
	}
	

	return 0;
}