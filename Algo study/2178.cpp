#include <bits/stdc++.h>

using namespace std;

int graph[101][101];
int visit[101][101];

int row, col;
int dx[] = { -1,0,1,0 }; // аб ╩С ©Л го
int dy[] = { 0,1,0,-1 }; // аб ╩С ©Л го
void bfs(int a, int b);
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> row >> col;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf_s("%1d", &graph[i][j]);
		}
	}

	bfs(0, 0);
	cout << visit[row - 1][col - 1] << "\n";
	return 0;
}

void bfs(int x, int y){
	queue <pair<int, int>>q; 
	q.push(make_pair(x, y));
	visit[x][y] = 1;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int n_x = x + dx[i];
			int n_y = y + dy[i];
			if (n_x >= 0 && n_x < row && n_y >= 0 && n_y < col) {
				if (visit[n_x][n_y] == 0 && graph[n_x][n_y] == 1) {
					q.push(make_pair(n_x, n_y));
					visit[n_x][n_y] = visit[x][y] + 1;
				}
			}
		}
	}
}
