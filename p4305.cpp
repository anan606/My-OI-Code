#include<bits/stdc++.h>
using namespace std;
const int maxn=4e5+7;
bool vis[maxn];
int n,k,x;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		memset(vis,0,sizeof(vis));
		cin>>k;
		for(int j=1; j<=k; j++) {
			cin>>x;
			x+=60000;
			if(vis[x]==0) {
				vis[x]=1;
				cout<<x-60000<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}