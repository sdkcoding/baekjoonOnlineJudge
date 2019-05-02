#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	int num1 = 1;
	int num2 = 0;
	int total = 0;
	for (int i = 0; i < n; i++) {
		total = num1 + num2;
		num1 = num2;
		num2 = total;
	}
	cout << total << '\n';
	return 0;
}