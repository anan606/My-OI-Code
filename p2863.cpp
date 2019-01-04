#include <bits/stdc++.h>
#define maxn 10001
using namespace std;
vector<int> G[maxn];
stack<int> s;
int n, m;
int dfn[maxn], used[maxn], vis[maxn], low[maxn], color[maxn], num[maxn], colornum = 0, cnt = 0, ans = 0;
void paint(int x) {
	s.pop();
	color[x] = colornum;
	num[colornum]++;
	vis[x] = false;
}
void tarjan(int x) {
	dfn[x] = low[x] = ++cnt;
	s.push(x);
	vis[x] = used[x] = true;
	for (int i = 0; i < G[x].size(); i++) {
		int q = G[x][i];
		if (!dfn[q]) {
			tarjan(q);
			low[x] = min(low[x], low[q]);
		} else if (vis[q])
			low[x] = min(low[x], dfn[q]);
	}
	if (low[x] == dfn[x]) {
		colornum++;
		while (s.top() != x) {
			int t = s.top();
			paint(t);
		}
		paint(x);
	}
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int u, v;
		cin >> u >> v;
		G[u].push_back(v);
	}
	for (int i = 1; i <= n; i++)
		if (!used[i])
			tarjan(i);
	for (int i = 1; i <= colornum; i++)
		if (num[i] > 1)
			ans++;
	cout << ans;
	return 0;
}