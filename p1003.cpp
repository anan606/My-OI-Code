#include<cstdio>
#include<iostream>
using namespace std;
int a[10001][4];
int main() {
	int n,x,y;
	bool f=0;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
		a[i][2]+=a[i][0];
		a[i][3]+=a[i][1];
	}
	cin>>x>>y;
	for(int i=n; i>=1; i--)
		if(a[i][0]<=x&&a[i][1]<=y&&a[i][2]>=x&&a[i][3]>=y) {
			cout<<i<<endl;
			f=1;
			break;
		}
	if(!f)
		cout<<-1<<endl;
	return 0;
}
