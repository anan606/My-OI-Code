#include<bits/stdc++.h>
#define N 200001
#define INF INT_MAX
using namespace std;
int n,ans=INF;
int a[N],f1[N],f2[N];
int main() {
	scanf("%d",&n);
	for (int i=1; i<=n; i++) scanf("%d",&a[i]);
	for (int i=1; i<=n; i++) {
		int t=0;
		for (int j=1; j<i; j++) if (a[j]<a[i]) t=max(t,f1[j]);
		f1[i]=t+1;
	}
	for (int i=n; i>=1; i--) {
		int t=0;
		for (int j=n; j>i; j--) if (a[j]<a[i]) t=max(t,f2[j]);
		f2[i]=t+1;
	}
	for (int i=1; i<=n; i++) ans=min(ans,n-f1[i]-f2[i]+1);
	printf("%d\n",ans);
	return 0;
}
