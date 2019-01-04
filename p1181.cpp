#include<iostream>
using namespace std;
int main() {
	int n,m,s=0,ans=1,x;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>x;
		if(s+x<=m) s+=x;
		else ans++,s=x;
	}
	cout<<ans<<endl;
	return 0;
}
