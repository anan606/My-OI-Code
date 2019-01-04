#include<iostream>
using namespace std;
int main() {
	int n,a,p,maxx=0,ans=0;
	cin>>n>>a;
	p=a;
	for(int i=1; i<n; i++) {
		if(a-p==1) ans++;
		else ans=0;
		if(maxx<ans) maxx=ans;
		p=a;
		if(i!=n-1) cin>>a;
	}
	cout<<maxx+1<<endl;
	return 0;
}
