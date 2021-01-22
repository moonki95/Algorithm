#include <bits/stdc++.h>

using namespace std;

vector <int> graph[1001];
int visit[1001];
void bfs(int start);
void dfs(int node);

int N; // 정점의 개수
int M; // 간선의 개수


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int V; // 탐색할 정점의 번호
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 0; i < N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(V);
	cout << "\n";
	bfs(V);
	return 0;
}

void bfs(int start){
	queue <int> q;
	memset(visit, false, sizeof(visit));
	visit[start] = 1;
	q.push(start);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		cout << node << " ";
		for (int i = 0; i < graph[node].size(); i++) {
			int next = graph[node][i];
			if (visit[next] == false) {
				visit[next] = true;
				q.push(next);
			}
		}
	}
}

void dfs(int node){
	cout << node << " ";
	if (visit[node] == 1) return;
	visit[node] = 1;
	
	for (int i = 0; i < graph[node].size(); i++) {
		int y = graph[node][i];
		if (visit[y] == false) {
			dfs(y);
		}
		
	}
}
