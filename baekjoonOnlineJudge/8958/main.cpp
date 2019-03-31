#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	string a;

	int count = 0;
	int len = 0;
	int sum = 0;
	for (int i = 0; i < t; i++) {
		cin >> a;
		len = a.size();
		for (int j = 0; j < len; j++) {
			if (a[j] == 'X') {
				count = 0;
			}
			else {
				count++;
				sum += count;
			}
		}
		cout << sum << '\n';
		sum = 0;
		count = 0;
	}
	

	return 0;
}