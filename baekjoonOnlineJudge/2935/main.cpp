#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string a;
	string b;
	char c;
	cin >> a;
	cin >> c;
	cin >> b;

	string result("");

	switch (c) {
	case '+':
		if (a.length() > b.length()) {
			a[a.length() - b.length()] = '1';
			result = a;
		}
		else if (a.length() < b.length()) {
			b[b.length() - a.length()] = '1';
			result = b;
		}
		else {
			result.append(a);
			result[0] = '2';
		}
		break;
	case '*':
		result.append("1");
		for (int i = 0; i < (a.length() + b.length()) - 2; i++) {
			result.append("0");
		}
		break;
	}

	cout << result << '\n';

	return 0;
}