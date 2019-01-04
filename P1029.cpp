#include<iostream>
using namespace std;
int m,n,ans;
int gcd(int a,int b) {
	return b==0?a:gcd(b,a%b);
}
int main() {
	cin>>n>>m;
	for(int i=1; i*i<=m*n; i++)
		if((n*m)%i==0&&gcd(i,(n*m)/i)==n)  ans++;
	cout<<ans*2<<endl;
	return 0;
}
