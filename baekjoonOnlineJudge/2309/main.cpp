#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	bool tall[100] = { false };
	int num[9] = { 0 };
	
	int input;
	for (int i = 0; i < 9; i++) {
		cin >> input;
		tall[input] = true;
	}

	int count = 0;
	for (int i = 0; i < 100; i++) {
		if (tall[i]) {
			num[count++] = i;
		}
	}

	int sum = 0;
	int index1 = 0, index2 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			for (int z = 0; z < 9; z++) {
				if ((z != i) && (z != j)) {
					sum += num[z];
				}
			}
			if (sum == 100) {
				index1 = i;
				index2 = j;
				break;
			}
			sum = 0;
		}
		if (sum == 100) {
			break;
		}
	}
	
	for (int i = 0; i < 9; i++) {
		if ((index1 != i) && (index2 != i)) {
			cout << num[i] << '\n';
		}
	}

	return 0;
}