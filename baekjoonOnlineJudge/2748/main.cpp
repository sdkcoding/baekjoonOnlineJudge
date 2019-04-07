#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;
	
	long long int sum = 0;
	long long int a = 0, b = 1;
	for (int i = 0; i < n ; i++) {
		a = b;
		b = sum;
		sum = a + b;
	}
	cout << sum << '\n';
	return 0;
}