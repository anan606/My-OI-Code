#include<iostream>
using namespace std;
int main() {
	int n,a,b,ans,temp;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a>>b;
		temp=temp+a+b-8;
		ans+=temp;
	}
	cout<<ans<<endl;
	return 0;
}
