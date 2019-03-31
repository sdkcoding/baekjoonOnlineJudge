#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string a;
	cin >> a;
	
	int len = a.size();
	int sum = 10;
	
	for (int i = 1; i < len; i++) {
		if (a[i - 1] == a[i]) {
			sum += 5;
		}
		else if (a[i - 1] != a[i]) {
			sum += 10;
		}
	}
		
	cout << sum << '\n';

	return 0;
}