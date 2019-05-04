#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool* remainder = new bool[42]{ false };
	int a;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		remainder[(a % 42)] = true;
	}
	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (remainder[i]) {
			count++;
		}
	}
	cout << count << '\n';

	delete[] remainder;
	return 0;
}