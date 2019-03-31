#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string palindrome;
	cin >> palindrome;

	int flag = 1;
	int len = palindrome.size();
	for (int i = 0; i < (len / 2); i++) {
		if (palindrome[i] != palindrome[len - 1 - i]) {
			flag = 0;
			break;
		}
	}

	cout << flag << '\n';
	return 0;
}