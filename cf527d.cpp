#include<iostream>
#include<algorithm>
using namespace std;
struct node {
	int l,r;
} a[2000005];
bool comp(node c,node d) {
	if(c.l!=d.l)
		return c.l<d.l;
	return c.r<d.r;
}
int main() {
	int n,ans=0;
	cin>>n;
	for(int i=1; i<=n; ++i) {
		int x,w;
		cin>>x>>w;
		a[i].l=x-w;
		a[i].r=x+w;
	}
	sort(a+1,a+n+1,comp);
	for(int i=n; i>=1; --i) {
		int len=i;
		ans++;
		while(i-1<=n&&a[len].l<a[i-1].r)
			i--;
	}
	cout<<ans<<endl;
	return 0;
}