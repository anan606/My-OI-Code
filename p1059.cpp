#include<iostream>
using namespace std;
bool a[1001]= {};
int s[101]= {};
int main() {
	int n,x,m=0,max=0;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>x;
		if(x>max) max=x;
		if(!a[x]) {
			a[x]=1;
			m++;
		}
	}
	cout<<m<<endl;
	for(int i=1; i<=max; i++)
		if(a[i])
			cout<<i<<" ";
	cout<<endl;
	return 0;
}
