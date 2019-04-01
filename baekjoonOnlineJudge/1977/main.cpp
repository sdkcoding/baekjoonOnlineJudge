#include <iostream>
#include <math.h>

using namespace std;

#define BASENUM 64
bool bBase[BASENUM] = { false, };

void prepareToCheckSquare() {
	for (int i = 0; i < BASENUM; i++) {
		bBase[i*i % BASENUM] = true;
	}
}

inline bool IsSquare(unsigned int num) {
	if (bBase[(int)(num & (BASENUM - 1))]) {
		unsigned int temp = (unsigned int)(sqrt((double)num) + 0.5);
		return (temp*temp == num);
	}
	else return false;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	prepareToCheckSquare();

	unsigned int a, b;
	int sum = 0;
	bool i = true;
	int small = 0;

	cin >> a >> b;
	while (a <= b) {
		if (IsSquare(a)) {
			sum += a;
			if (i) {
				small = a;
				i = false;
			}
		}
		a++;
	}
	if (sum == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << sum << '\n';
		cout << small << '\n';
	}

	return 0;
}