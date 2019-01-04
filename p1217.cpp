#include<iostream>
#include<cmath>
using namespace std;
int ifp(int n) {
	if(n==1) return false;
	else if(n==2) return true;
	else if(n%2==0) return false;
	for(int i=3; i*i<=n; i+=2)
		if(n%i==0)
			return false;
	return true;
}
int len(int m) {
	int l=0;
	do {
		m/=10;
		l++;
	} while(m!=0);
	return l;
}
int main() {
	int a,b;
	int g[11];
	cin>>a>>b;
	if(a%2==0) a++;
	if(b>9999999) b=9999999;
	for(int k=a; k<=b; k+=2) {
		int w=k;
		int t=len(w),x=len(w);
		do {
			g[t]=w%10;
			w/=10;
			t--;
		} while(t>0);
		int s=1;
		if(x>1)for(int i=x; i>=x/2; i--)
				if(g[i]!=g[x+1-i]) {
					s=0;
					break;
				}
		if(s&&ifp(k))
			cout<<k<<endl;
	}
	return 0;
}
