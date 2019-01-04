#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int n,k,ans;
	cin>>n>>k;
	while(__builtin_popcount(n)>k) ans+=n&-n,n+=n&-n;
	cout<<ans<<endl;
	return 0;
}
