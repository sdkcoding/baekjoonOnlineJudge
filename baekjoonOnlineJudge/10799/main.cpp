#include <bits/stdc++.h>
#define WRONG	0
#define	ANSWER	1

using namespace std;

#if WRONG

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char sen[100001] = { 0 };
	cin >> sen;
	stack<char> st;
	int razer = 0;
	int sum = 0;
	for (int i = 0; sen[i] != 0; i++) {
		char a = sen[i];
		if (a == '(') {
			st.push(a);
		}
		else {
			char b = sen[i - 1];
			if (b == '(') {
				st.pop();
				if (!st.empty()) {
					st.push('*');
				}
			}
			else {
				while (st.top() != '(') {
					razer++;
					st.pop();
				}
				sum += razer + 1;
				st.pop();
				if (!st.empty()) {
					while (razer--) {
						st.push('*');
					}
				}
				razer = 0;
			}
		}
	}
	cout << sum << '\n';
	return 0;
}

#endif

#if ANSWER
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char sen[100001] = { 0 };
	cin >> sen;
	stack<char> st;
	unsigned int sum = 0;
	for (int i = 0; sen[i] != 0; i++) {
		char a = sen[i];
		if (a == '(') {
			st.push(a);
		}
		else {
			char b = sen[i - 1];
			st.pop();
			if (b == '(') {
				sum += st.size();
			}
			else {
				sum += 1;
			}
		}
	}
	cout << sum << '\n';
	return 0;
}

#endif