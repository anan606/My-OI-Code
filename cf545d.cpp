#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1e5+1;
int n,a[maxn];
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int _time=0,ans=0;
	for(int i=1;i<=n;i++)if(_time<=a[i]) ans++,_time+=a[i];
	cout<<ans<<endl;
	return 0;
}