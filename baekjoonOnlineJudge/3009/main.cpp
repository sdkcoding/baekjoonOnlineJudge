#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;
	int c, d;
	int e, f;
	int g, h;

	cin >> a >> b;
	cin >> c >> d;
	cin >> e >> f;
	
	if (a == c) {
		g = e;
	}
	else if (a == e) {
		g = c;
	}
	else {
		g = a;
	}

	if (b == d) {
		h = f;
	}
	else if(b == f) {
		h = d;
	}
	else {
		h = b;
	}

	cout << g << " " <<  h << '\n';

//	cout << (a ^ c ^ e) << " " << (b ^ d ^ f) << '\n';

	// XOR swap
	a ^= b;
	b ^= a;
	a ^= b;

	cout << "a = " << a << ", b = " << b << "\n";

	return 0;
}