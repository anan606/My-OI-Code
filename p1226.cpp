#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	long long b,p,k,s,t;
	cin>>b>>p>>k;
	cout<<b<<"^"<<p<<" mod "<<k<<"=";
	s=b%k;
	t=1;
	for (int i=2; i<=p; i++) {
		s=s*b%k;
		if (s==b%k) break;
		t++;
	}
	p=p%t;
	s=1;
	if (p==0) p=t;
	for (int i=1; i<=p; i++)
		s=s*b%k;
	cout<<s<<endl;
	return 0;
}
