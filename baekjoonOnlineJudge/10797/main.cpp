#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int day;
	cin >> day;

	int car;
	int count = 0;
	for (int i = 0; i < 5; i++) {
		cin >> car;
		if (car == day) {
			count++;
		}
	}
	cout << count << '\n';

	return 0;
}