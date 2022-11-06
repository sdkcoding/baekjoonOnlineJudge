#include <bits/stdc++.h>

using namespace std;	//std namespace안의 모든 객체 사용

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string sen;
	while (1) {
		getline(cin, sen);
		if (sen == ".") {
			break;
		}
		bool isVaild = true; 
		stack<char> st;
		for (auto c : sen) {
			if (c == '(' || c == '[') {
				st.push(c);
			}
			if (c == ')') {
				if (st.empty()) {
					isVaild = false;
				}
				else if (st.top() == '(') {
					st.pop();
				}
				else if(st.top() == '[') {
					isVaild = false;
				}
			}
			if (c == ']') {
				if (st.empty()) {
					isVaild = false;
				}
				else if (st.top() == '[') {
					st.pop();
				}
				else if (st.top() == '(') {
					isVaild = false;
				}
			}
		}
		if (!st.empty()) {
			isVaild = false;
		}
		if (isVaild) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
	return 0;
}