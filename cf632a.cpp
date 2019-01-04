#include<iostream>
using namespace std;
long long n,m,apple,money,i;
string s[51];
int main() {
	cin>>n>>m;
	m/=2;
	for(i=1; i<=n; i++) cin>>s[i];
	for(i=n; i>=1; i--) {
		apple*=2;
		if(s[i]=="halfplus") apple+=1;
		money+=apple;
	}
	money*=m;
	cout<<money<<endl;
	return 0;
}
