#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string name;
	int day, month, year;
	cin >> name >> day >> month >> year;
	int birthDay = (year * 10000) + (month * 100) + day;
	int maxDay = birthDay;
	int minDay = birthDay;
	string minName = name;
	string maxName = name;
	
	for (int i = 0; i < n - 1; i++) {
		cin >> name >> day >> month >> year;
		birthDay = (year * 10000) + (month * 100) + day;
		if (minDay > birthDay) {
			minDay = birthDay;
			minName = name;
		}
		if (maxDay < birthDay) {
			maxDay = birthDay;
			maxName = name;
		}
	}
	
	cout << maxName << '\n';
	cout << minName << '\n';
	
	return 0;
}