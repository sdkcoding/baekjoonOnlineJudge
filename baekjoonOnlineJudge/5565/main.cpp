#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int sum;
	cin >> sum;
	
	int bPrice;
	int sum1 = 0;
	for (int i = 0; i < 9; i++) {
		cin >> bPrice;
		sum1 += bPrice;
	}
	cout << sum - sum1 << '\n';

	return 0;
}