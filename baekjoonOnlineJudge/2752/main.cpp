#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;

	cin >> a >> b >> c;
	
	int max, mid, min;
	
	if ((a < c) && (b < c)) {
		max = c;
		if (a < b) {
			mid = b; min = a;
		}
		else {
			mid = a; min = b;
		}
	}
	else if ((a < b) && (c < b)) {
		max = b;
		if (a < c) {
			mid = c; min = a;
		}
		else {
			mid = a; min = c;
		}
	}
	else if ((c < a) && (b < a)) {
		max = a;
		if (b < c) {
			mid = c; min = b;
		}
		else {
			mid = b; min = c;
		}
	}
	
	cout << min << " " << mid << " " << max << '\n';

	return 0;
}