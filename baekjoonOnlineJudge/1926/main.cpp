#include <bits/stdc++.h>
using namespace std;	//std namespace���� ��� ��ü ���
#define X	first 
#define Y	second 	// pair���� first, second�� �ٿ��� ���� ���ؼ� ���
int board[502][502] = { 0 };
bool vis[502][502] = { false };
int row, col;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // �����¿� �� ������ �ǹ�
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
				vis[i][j] = true; // (i, j)�� �湮�ߴٰ� ���
				Q.push({ i,j }); // ť�� �������� (i, j)�� ����.
				while (!Q.empty()) {
					pair<int, int> cur = Q.front(); Q.pop();
					cout << '(' << cur.X << ", " << cur.Y << ") -> \n";
					for (int dir = 0; dir < 4; dir++) { // �����¿� ĭ�� ���캼 ���̴�.
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir]; // nx, ny�� dir���� ���� ������ ������ ĭ�� ��ǥ�� ��
						if (nx < 0 || nx >= row || ny < 0 || ny >= col) continue;
						if (vis[nx][ny] || board[nx][ny] != 1) continue; // �̹� �湮�� ĭ�̰ų� �Ķ� ĭ�� �ƴ� ���
						vis[nx][ny] = true; // (nx, ny)�� �湮�ߴٰ� ���
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
