// string::size
#include <iostream>
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
		cout << sqrt((double)num) << '\n';
		cout << sqrt((double)num) + 0.5 << '\n';
		unsigned int temp = (unsigned int)(sqrt((double)num) + 0.5);
		return (temp*temp == num);
	}
	else return false;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	prepareToCheckSquare();
	while (a <= b) {
		if (IsSquare(a)) {
			cout << a << '\n';
		}
		a++;
	}
	
	return 0;
}