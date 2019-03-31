#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int i = 1;
	string a("");
	int sum = 0;

	cin >> n;
	while (n >= 0) {
		a = to_string(n);
		a.append(" = ");
		while (i <= n/2) {
			if (n % i == 0) {
				a.append(to_string(i));
				a.append(" + ");
				sum += i;
			}
			i++;
		}
		if (sum == n) {
			a.erase(a.end() - 2, a.end());
		}
		else {
			a.clear();
			a.append(to_string(n));
			a.append(" is NOT perfect.");
		}
		cout << a << '\n';
		a.clear();
		cin >> n;
		i = 1;
		sum = 0;
	}

	return 0;
}