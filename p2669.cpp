#include<iostream>
using namespace std;
int main() {
	int k;
	cin>>k;
	int ans=0,n=0;
	for(int i=1;; i++)
		for(int j=1; j<=i; j++) {
			ans+=i;
			n++;
			if(n==k) {
				cout<<ans<<endl;
				return 0;
			}
		}
}
