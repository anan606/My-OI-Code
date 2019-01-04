#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
const ll MOD=1e9+7;
int n,fail[1000010]={},ans[1000010];
ll cnt;
char a[1000010];
int main() {
	int T,i,j;
	cin>>T;
	while(T--) {
		cin>>a;
		n=strlen(a);
		j=0;
		ans[0]=0;
		ans[1]=1;
		for(i=1; i<n; i++) {
			while(j&&(a[i]!=a[j])) j=fail[j];
			j+=(a[i]==a[j]);
			fail[i+1]=j;
			ans[i+1]=ans[j]+1;
		}
		j=0;
		cnt=1;
		for(i=1; i<n; i++) {
			while(j&&(a[i]!=a[j])) j=fail[j];
			j+=(a[i]==a[j]);
			while((j<<1)>(i+1)) j=fail[j];
			cnt=(cnt*(ll)(ans[j]+1))%MOD;
		}
		cout<<cnt<<endl;
	}
}
