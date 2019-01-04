#include<iostream>
using namespace std;
int a[40][40]= {};
int main() {
	int n,k;
	cin>>n;
	a[1][(n+1)/2]=1;
	int x=1,y=(n+1)/2;
	for(int k=2; k<=n*n; k++) {
		if(x==1 && y!=n) {
			a[n][y+1]=k;
			x=n;
			y++;
			continue;
		}
		if(x!=1 && y==n) {
			a[x-1][1]=k;
			x--;
			y=1;
			continue;
		}
		if(x==1 && y==n) {
			a[x+1][y]=k;
			x++;
			continue;
		}
		if(a[x-1][y+1]==0) {
			a[x-1][y+1]=k;
			x--;
			y++;
			continue;
		}
		a[x+1][y]=k;
		x++;
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
