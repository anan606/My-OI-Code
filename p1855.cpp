#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int MAX=101;
int f[MAX][2*MAX][2*MAX];
int M[MAX],T[MAX];
int n,m,t,ans=0;
int main() {
	cin>>n>>m>>t;
	for(int i=1;i<=n;++i)
		cin>>M[i]>>T[i];
	for(int i=1;i<=n;i++)
		for(int j=m;j>=0;j--)
			for(int k=t;k>=0;k--)
				if(j+M[i]<=m&&k+T[i]<=t) 
					ans=max(ans,f[i][j][k]=max(f[i-1][j][k],f[i-1][j+M[i]][k+T[i]]+1));
				else
					ans=max(ans,f[i][j][k]=f[i-1][j][k]);
	cout<<ans<<endl;
	return 0;  
}
