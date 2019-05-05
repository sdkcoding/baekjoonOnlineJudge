#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	int numList[10] = { 0 };
	int score[5] = { 0 };
	int num, sum = 0;
	int count = 0;
	int index = 0;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> num;
			numList[num - 1]++;
		}
		for (int z = 0; z < 10; z++) {
			count = numList[z];
			numList[z] = 0;
			while (count--) {
				score[index++] = z + 1;
			}
		}
		index = 0;
		if (score[4-1] - score[1] >= 4) {
			cout << "KIN" << '\n';
		}
		else {
			for (int s = 1; s < 5 - 1; s++) {
				sum += score[s];
			}
			cout << sum << '\n';
			sum = 0;
		}
	}

	return 0;
}