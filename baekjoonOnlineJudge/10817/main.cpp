#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	int result;
	cin >> a >> b >> c;

	if ((a <= c && c <= b) || (b <= c && c <= a)) {
		result = c;
	}
	else if ((a <= b && b <= c) || (c <= b && b <= a)) {
		result = b;
	}
	else if((b <= a && a <= c) || (c <= a && a <= b)){
		result = a;
	}

	cout << result << '\n';

	return 0;
}