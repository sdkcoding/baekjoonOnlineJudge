#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int s;  string str;
		cin >> s >> str;
		str.erase(s - 1, 1);
		cout << str << '\n';
	}

	return 0;
}