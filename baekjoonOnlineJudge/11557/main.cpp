#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	int n;
	string uni;
	int waste;

	int max = 0;
	string maxUni;

	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> uni >> waste;
			if (max < waste) {
				max = waste;
				maxUni = uni;
			}
		}
		cout << maxUni << '\n';
	}
	
	return 0;
}