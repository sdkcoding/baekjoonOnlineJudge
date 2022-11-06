#include <bits/stdc++.h>
#define	MY	0
#define OTHER1	1
#define	OTHER2	0
using namespace std;

#if MY
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string sen;
	getline(cin, sen);
	bool isVaild = true;
	stack<char> st;
	stack<int> st1;
	int sum = 0;
	int temp = 0;
	for (auto c : sen) {
		if (c == '(' || c == '[') {
			st.push(c);
		}
		else {
			if (c == ')') {
				if (st.empty()) {
					isVaild = false;
				}
				else if (st.top() == '(') {
					st.pop();
				}
				else if (st.top() == '[') {
					isVaild = false;
				}
			}
			else if (c == ']') {
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
	}
	if (!st.empty()) {
		isVaild = false;
	}

	if (isVaild) {
		for (int i = 0; i < sen.length(); i++) {
			char ch = sen[i];
			if (ch == '(' || ch == '[') {
				st1.push(ch);
			}
			else {
				char ch2 = sen[i - 1];
				if (ch == ')') {
					if (ch2 == '(') {
						st1.pop();
						st1.push(2);
					}
					else {
						while (st1.top() != '(') {
							temp += st1.top();
							st1.pop();
						}
						st1.pop();
						temp *= 2;
						st1.push(temp);
						temp = 0;
					}
				}
				else if (ch == ']') {
					if (ch2 == '[') {
						st1.pop();
						st1.push(3);
					}
					else {
						while (st1.top() != '[') {
							temp += st1.top();
							st1.pop();
						}
						st1.pop();
						temp *= 3;
						st1.push(temp);
						temp = 0;
					}
				}
			}
		}
		while (!st1.empty()) {
			sum += st1.top();
			st1.pop();
		}
	}

	cout << sum << '\n';

	return 0;
}
#endif	//	MY

#if OTHER1
int main() {
	string input;
	char stack[31] = {};
	int sum[31] = {}, top = 0;
	getline(cin, input);
	for (int i = 0; input[i]; i++) {
		if (input[i] == '(' || input[i] == '[')
			stack[top++] = input[i] == '(' ? ')' : ']';
		else {
			top--;
			if (top < 0 || stack[top] != input[i]) {
				sum[0] = 0;
				break;
			}
			sum[top] += (stack[top] == ')' ? 2 : 3) * (sum[top + 1] ? sum[top + 1] : 1);
			sum[top + 1] = 0;
		}
	}
	printf("%d\n", sum[0]);
	return 0;
}
#endif //	OTHER1

#if OTHER2
int main() {
	string S;
	char T[32];
	int A[32] = { 0, }, i = 0, c = 0, m;
	for (getline(cin, S); S[i]; i++) {
		if (S[i] == '(' || S[i] == '[') T[++c] = S[i];
		else {
			if (!c || abs(S[i] - T[c]) > 2) { c = 1; break; }
			m = S[i] == ']' ? 3 : 2;
			if (A[c]) A[c - 1] += A[c] * m;
			else A[c - 1] += m;
			A[c--] = 0;
		}
	}
	printf("%d", c > 0 ? 0 : A[0]);
}
#endif // OTHER2

