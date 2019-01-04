#include<iostream>
#include<algorithm>
using namespace std;
int a[100001];
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	sort(a,a+n+1);
	for(int i=1; i<=n; i++) cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
