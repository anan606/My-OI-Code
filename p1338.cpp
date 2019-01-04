#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int p=n,c=0;
	for (int s=1; m>0 ; s++,p--)
		m-=c=min(s,m);
	for(int i=1; i<p; i++)
		cout<<i<<' ';
	cout<<p+c<<' ';
	for(int i=n; i>=p; i--)
		if(i!=p+c)
			cout<<i<<' ';
	return 0;
}
