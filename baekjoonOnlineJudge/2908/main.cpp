#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;

	cin >> a >> b;
	
	int c = 0, d = 0;
	while (a > 0 && b > 0) {
		c = (a % 10) + (c * 10);
		d = (b % 10) + (d * 10);
		a /= 10;
		b /= 10;
	}
	

	if (c < d) {
		cout << d << '\n';
	}
	else if(c > d){
		cout << c << '\n';
	}
	
	return 0;
}