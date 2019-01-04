#include<iostream>
using namespace std;
int gcd(int a,int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}
int main() {
	int i,j,a,b,ansa,ansb,l;
	cin>>a>>b>>l;
	ansa=l;
	ansb=1;
	for(i=1; i<=l; i++)
		for(j=1; j<=l; j++)
			if(gcd(i,j)==1&&i*b>=j*a&&i*ansb<j*ansa) {
				ansa=i;
				ansb=j;
			}
	cout<<ansa<<" "<<ansb<<endl;
	return 0;
}
