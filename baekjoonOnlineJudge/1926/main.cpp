#include <bits/stdc++.h>
using namespace std;	//std namespace안의 모든 객체 사용
#define X	first 
#define Y	second 	// pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[502][502] = { 0 };
bool vis[502][502] = { false };
int row, col;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int p1 = 0, p2 = 0, temp = 0;
	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> board[i][j];
		}
	}
	cout << row << " " << col << "\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
	queue<pair<int, int> > Q;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (!vis[i][j] && board[i][j]) {
				cout << i << ", " << j << '\n';
				p1++;
				vis[i][j] = true; // (i, j)을 방문했다고 명시
				Q.push({ i,j }); // 큐에 시작점인 (i, j)을 삽입.
				while (!Q.empty()) {
					pair<int, int> cur = Q.front(); Q.pop();
					cout << '(' << cur.X << ", " << cur.Y << ") -> \n";
					for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
						if (nx < 0 || nx >= row || ny < 0 || ny >= col) continue;
						if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
						vis[nx][ny] = true; // (nx, ny)를 방문했다고 명시
						Q.push({ nx,ny });
					}
					temp++;
				}
				if (temp > p2) {
					p2 = temp;
				}
				temp = 0;
			}
		}
	}

	cout << p1 << '\n';
	cout << p2 << '\n';
	return 0;
}
