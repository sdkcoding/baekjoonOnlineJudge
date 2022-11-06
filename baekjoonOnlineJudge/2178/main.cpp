#include <bits/stdc++.h>
using namespace std;

int board[102][102] = {0};
bool vis[102][102] = { false };
int dx[4] = {-1, 0, 1,  0};
int dy[4] = {0, 1, 0, -1};
int row, col;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string num;

	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		cin >> num;
		for (int j = 0; j < col; j++) {
			board[i][j] = num.at(j) - '0';
		}
	}

	cout << row << " " << col << '\n';
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << board[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}