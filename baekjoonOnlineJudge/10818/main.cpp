#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int num;
	cin >> num;
	int max = num;
	int min = num;
	for (int i = 1; i < n; i++) {	
		cin >> num;
		if (max < num) {
			max = num;
		}
		if (min > num) {
			min = num;
		}
	}
	
	cout << min << " " << max << '\n';
	return 0;
}