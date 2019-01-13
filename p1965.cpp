#include<iostream> 
#include<cstdio> 
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<cstring>
using namespace std; 
int n,m,k,x;
int ksm(int a,int b) {
	int re=1;
	int t=a;
	while(b) {
		if(b&1) re=re*t%n; 
		t=t*t%n;
		b>>=1;
	}
	return re;
}
int main() {
	cin>>n>>m>>k>>x;
	cout<<(x%n+m%n*ksm(10,k)%n)%n<<endl;
	return 0;
}