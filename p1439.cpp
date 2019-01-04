#include<iostream>
using namespace std;
int len=0;
int a[100001],p[100001],f[100001];
int bound(int x) {
	int L=1,R=len;
	while(L<R) {
		int mid=(L+R)>>1;
		if(p[f[mid]]>p[x])
			R=mid;
		else
			L=mid+1;
	}
}
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	for(int i=1; i<=n; i++) {
		int x;
		cin>>x;
		p[x]=i;
	}
	for(int i=1; i<=n; i++) {
		if(p[a[i]]>p[f[len]])
			f[++len]=a[i];
		else
			f[bound(a[i])]=a[i];
	}
	cout<<len<<endl;
	return 0;
}
