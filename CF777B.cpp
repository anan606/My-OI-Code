#include<bits/stdc++.h>
using namespace std;
char a[1001],b[1001];
int main() {
	int n;
	cin>>n>>a>>b;
	sort(a,a+n);
	sort(b,b+n);
	int ans=0,i=0,j=0,ans2=0;
	while(i<n&&j<n)
		if(b[j]>=a[i])
			i++,j++;
		else
			j++,ans++;
	i=j=0;
	while(i<n&&j<n)
		if(b[j]>a[i])
			i++,j++,ans2++;
		else j++;
	cout<<ans<<endl<<ans2<<endl;
}
