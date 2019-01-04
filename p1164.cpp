#include<iostream>
#define N 110
using namespace std;
int n,m,a[N],f[10010];
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	f[0]=1;
	for(int i=1; i<=n; i++)
		for(int v=m; v>=a[i]; v--)
			f[v]+=f[v-a[i]];
	cout<<f[m]<<endl;
	return 0;
}

