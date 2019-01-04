#include<bits/stdc++.h>
using namespace std;
#define rg
#define ll long long
const int N=1e5+5;
int n,m;
ll block,val[N],mul[N],add[N],k,ans,p,a[N];
int belong[100005],l[100005],r[100005];
inline void reset(int x) {
	for(int i=l[x]; i<=r[x]; i++)
		a[i]=(a[i]*mul[x]+add[x])%p;
	mul[x]=1,add[x]=0;
}
int main() {
	cin>>n>>m>>p;
	block=sqrt(n);
	for(rg int i=1; i<=n; i++) belong[i]=i/block;
	for(rg int i=n; i>=1; i--) l[belong[i]]=i;
	for(rg int i=1; i<=n; i++) r[belong[i]]=i;
	for(rg int i=1; i<=n; i++) cin>>a[i];
	for(rg int i=1; i<=n; i++) val[belong[i]]+=a[i];
	for(rg int i=belong[1]; i<=belong[n]; i++) mul[i]=1;
	for(int i=1; i<=m; i++) {
		int opt,x,y;
		cin>>opt>>x>>y;
		if(opt==1) {
			cin>>k;
			reset(belong[x]);
			int temp=min(y,r[belong[x]]);
			for(int j=x; j<=temp; j++)
				val[belong[x]]+=(k-1)*a[j]%p,a[j]*=k,a[j]%=p;
			if(belong[x]!=belong[y]) {
				reset(belong[y]);
				for(int j=y; j>=l[belong[y]]; j--)
					val[belong[y]]+=(k-1)*a[j]%p,a[j]=a[j]*k%p;
			}
			for(int j=belong[x]+1; j<=belong[y]-1; j++)
				mul[j]*=k,mul[j]%=p,add[j]*=k,add[j]%=p,val[j]*=k,val[j]%=p;
		}
		if(opt==2) {
			cin>>k;
			reset(belong[x]);
			val[belong[x]]=(val[belong[x]]+(min(y,r[belong[x]])-x+1)*k)%p;
			int temp=min(y,r[belong[x]]);
			for(int j=x; j<=temp; j++)
				a[j]+=k;
			if(belong[x]!=belong[y]) {
				reset(belong[y]);
				val[belong[y]]=(val[belong[y]]+((y-l[belong[y]]+1)*k))%p;
				for(int j=y; j>=l[belong[y]]; j--)
					a[j]+=k;
				for(int j=belong[x]+1; j<=belong[y]-1; j++)
					add[j]+=k,val[j]=(val[j]+block*k)%p;
			}
		}
		if(opt==3) {
			ans=0;
			int temp=min(y,r[belong[x]]);
			for(int j=x; j<=temp; j++)
				ans+=(a[j]*mul[belong[x]]+add[belong[x]])%p;
			if(belong[x]!=belong[y]) {
				for(int j=y; j>=l[belong[y]]; j--)
					ans+=(a[j]*mul[belong[y]]+add[belong[y]])%p;
				for(int j=belong[x]+1; j<=belong[y]-1; j++)
					ans+=val[j];
			}
			cout<<ans%p<<endl;
		}
	}
	return 0;
}
