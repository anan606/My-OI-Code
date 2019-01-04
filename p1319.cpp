#include <iostream>
using namespace std;
int main() {
	int a,n,t=0,i=0,s=0;
	cin>>n;
	while(s<n*n) {
		cin>>a;
		i++;
		for(int b=a; b>=1; b--) {
			if(t==n) {
				cout<<endl;
				t=0;
			}
			cout<<!(i%2);
			t++;
			s++;
		}
	}
	cout<<endl;
	return 0;
}
