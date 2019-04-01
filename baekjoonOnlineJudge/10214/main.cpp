#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	int yon = 0, kor = 0;
	int a, b;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a >> b;
			yon += a;
			kor += b;
		}
		if (yon > kor) {
			cout << "Yonsei" << '\n';
		}
		else if (yon < kor) {
			cout << "Korea" << '\n';
		}
		else {
			cout << "Draw" << '\n';
		}
		yon = 0; kor = 0;
	}

	return 0;
}