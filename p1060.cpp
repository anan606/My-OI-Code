#include<iostream>
using namespace std;
int v[26],p[26],f[50001];
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=m; i++)
		cin>>v[i]>>p[i];
//	f[1]=p[1];
	for(int i=1; i<=m; i++)
		for(int j=n; j>=v[i]; j--)
			f[j]=max(f[j],f[j-v[i]]+p[i]*v[i]);
	cout<<f[n]<<endl;
	return 0;
}
