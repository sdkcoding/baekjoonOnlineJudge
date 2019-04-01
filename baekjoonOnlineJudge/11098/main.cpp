#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int p;
	unsigned int c;
	string name("");

	unsigned int max = 0;
	string maxName("");
	for (int i = 0; i < n; i++) {
		cin >> p;
		for (int j = 0; j < p; j++) {
			cin >> c >> name;
			if (max < c) {
				max = c;
				maxName = name;
			}
		}
		cout << maxName << '\n';
		max = 0;
		maxName = "";
	}

	return 0;
}