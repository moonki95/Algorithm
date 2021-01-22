#include <bits/stdc++.h>

using namespace std;

vector <int> graph[101];
bool visit[101];

int num = 0;
void dfs(int node);
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int pc_num;
	int a, b;
	int vertex;
	cin >> pc_num;
	cin >> vertex;
	for (int i = 0; i < vertex; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(1);
	cout << num - 1 << "\n";
	return 0;
}

void dfs(int node){
	if (visit[node] == 1) return; // �湮������ �Ѿ

	visit[node] = 1; // �� ��� �湮ó������
	num++;
	for (int i = 0; i < graph[node].size(); i++) {
		int y = graph[node][i];
		dfs(y);
	}
}
