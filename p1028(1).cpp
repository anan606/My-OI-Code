#include<iostream>
using namespace std;
int a[1001]={0,1};
int main() {
	int n,i;
	cin>>n;
	for(i=2; i<=n; i++) {
		a[i]=1;
		for(int j=1; j<=i/2; j++)
			a[i]+=a[j];
	}
	cout<<a[i-1]<<endl;
	return 0;
}
