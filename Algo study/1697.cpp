#include <bits/stdc++.h>
#define MAX_VALUE 100001
using namespace std;


bool visit[MAX_VALUE];
int bfs(int n, int m);
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; // 수빈이가 있는 위치
	int K; // 동생이 있는 위치

	cin >> N >> K;

	cout << bfs(N, K) << "\n";


	return 0;
}

int bfs(int n, int m){
	int res = 0;
	queue <int> q;
	q.push(n);
	while (1) {
		int size = q.size();
		for (int i = 0; i <size; i++) {
			n = q.front();
			q.pop();
			if (n == m) {
				return res;
			}
			if (n > 0 && visit[n - 1] == 0) {
				q.push(n - 1);
				visit[n - 1] = 1;
			}
			if (n < 100000 && visit[n + 1] == 0) {
				q.push(n + 1);
				visit[n + 1] = 1;
			}
			if (n * 2 <= 100000 && visit[n * 2] == 0) {
				q.push(n * 2);
				visit[n * 2] = 1;
			}
		}
		res++;
	}
}
