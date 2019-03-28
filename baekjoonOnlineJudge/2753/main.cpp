#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	int result;
	cin >> a;
	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0)) {
		result = 1;
	}
	else {
		result = 0;
	}
	cout << result << '\n';

	return 0;
}