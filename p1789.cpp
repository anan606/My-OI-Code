#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int n,m,l,ans;
bool a[10005][100005];
void huo(int x,int y) {
	for(int i=max(1,x-2); i<=min(n,x+2); i++)
		if(a[i][y]==0)  ans++,a[i][y]=1;
	for(int i=max(1,y-2); i<=min(n,y+2); i++)
		if(a[x][i]==0)  ans++,a[x][i]=1;
	if(x-1>=1&&y-1>=1)  if(a[x-1][y-1]==0)  ans++,a[x-1][y-1]=1;
	if(x-1>=1&&y+1<=n)  if(a[x-1][y+1]==0)  ans++,a[x-1][y+1]=1;
	if(y+1<=n&&y+1<=n)  if(a[x+1][y+1]==0)  ans++,a[x+1][y+1]=1;
	if(x+1<=n&&y-1>=1)  if(a[x+1][y-1]==0)  ans++,a[x+1][y-1]=1;
}
void ying(int x,int y) {
	for(int i=max(1,x-2); i<=min(n,x+2); i++)
		for(int j=max(1,y-2); j<=min(n,y+2); j++)
			if(a[i][j]==0) ans++,a[i][j]=1;
}
int main() {
	cin>>n>>m>>l;
	for(int i=1; i<=m; i++) {
		int x,y;
		cin>>x>>y;
		huo(x,y);
	}
	for(int i=1; i<=l; i++) {
		int x,y;
		cin>>x>>y;
		ying(x,y);
	}
	cout<<n*n-ans<<endl;
	return 0;
}
