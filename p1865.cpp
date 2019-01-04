#include<iostream>
#define ll long long
using namespace std;
ll a[1000005];
bool prime(ll x) {
	if(x==1) return false;
	if(x==2) return true;
	if(x%2==0) return false;
	for(ll i=3; i*i<=x; i+=2)
		if(x%i==0) return false;
	return true;
}
int main() {
	ll n,m,l,r;
	cin>>n>>m;
	for(ll i=1; i<=m; i++)
		if(prime(i)) a[i]=a[i-1]+1;
		else a[i]=a[i-1];
	for(ll i=1; i<=n; i++) {
		cin>>l>>r;
		if(l>m||r>m||l<1||r<1)
			cout<<"Crossing the line"<<endl;
		else cout<<a[r]-a[l-1]<<endl;
	}
	return 0;
}
