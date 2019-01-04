#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,s,x,r;
	cin>>t>>s>>x;
	int num=0;
	while(t<=x) {
		if(t==x||r==x) {
			cout<<"YES"<<endl;
			num++;
			break;
		}
		t+=s;
		r=t+1;
	}
	if(num==0) cout<<"NO"<<endl;
	return 0;
}
