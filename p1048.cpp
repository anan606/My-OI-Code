#include<iostream>
#define N 110
using namespace std;
int f[1000],c[1000],w[1000];
int main() {
	int n,v;
	cin>>v>>n;
	for(int i=1; i<=n; i++)	cin>>c[i]>>w[i];
	for(int i=1; i<=n; i++)
		for(int j=v; j>=c[i]; j--)
			f[j]=max(f[j],f[j-c[i]]+w[i]);
	cout<<f[v]<<endl;
	return 0;
}
