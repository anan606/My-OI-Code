#include <iostream>
using namespace std;
long long ma[25][25],f[25][25]={1},n,m,c,b,mx[10]= {2,2,1,1,-2,-2,-1,-1},my[10]= {-1,1,2,-2,1,-1,-2,2};
long long fun(int x,int y) {
	if(x==0||y==0)return f[x][y];
	else if(f[x][y]==0&&ma[x][y]!=1)
		f[x][y]=fun(x-1,y)+fun(x,y-1);
	return f[x][y];
}
int main() {
	cin>>n>>m>>b>>c;
	ma[b][c]=1;
	for(int i=0; i<8; i++) {
		if(b+mx[i]>=0&&c+my[i]>=0)
			ma[b+mx[i]][c+my[i]]=1;
	}
	for(int i=1; i<=n; i++) {
		if(ma[i][0]==1)break;
		f[i][0]=1;
	}
	for(int i=1; i<=m; i++) {
		if(ma[0][i]==1)break;
		f[0][i]=1;
	}
	cout<<fun(n,m)<<endl;
	return 0;
}
