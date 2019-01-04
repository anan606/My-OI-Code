#include<iostream>
#include<cstring>
using namespace std;
int s[1010][1010];
int opt[6][3] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}},cou,ans[1010][1010],n,genx[1010][1010],geny[1010][1010],curx, cury;
void dfs(int x, int y) {
	if(x>n||x<1||y>n||y<1) return;
	if(ans[x][y] > -1) return;
	cou++;
	genx[x][y]=curx;
	geny[x][y]=cury;
	ans[x][y]=0;
	for(int i=0; i<4; i++) {
		if(s[x+opt[i][0]][y+opt[i][1]] != s[x][y])
			dfs(x+opt[i][0], y+opt[i][1]);
	}
}
int main() {
	memset(ans, -1, sizeof(ans));
	memset(genx, 0, sizeof(genx));
	memset(geny, 0, sizeof(geny));
	int m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		char str[1010];
		cin>>str;
		for(int j = 1; j <= n; j++) {
			s[i][j] = str[j-1] - 48;
		}
	}
	for(int i=1; i<=m; i++) {
		int x, y;
		cou=0;
		cin>>x>>y;
		if(ans[genx[x][y]][geny[x][y]] > 0) {
			cout<<ans[genx[x][y]][geny[x][y]]<<endl;
			continue;
		}
		curx=x;
		cury=y;
		dfs(x, y);
		cout<<cou<<endl;
		ans[x][y] = cou;
		genx[x][y] = x;
		geny[x][y] = y;
	}
}
