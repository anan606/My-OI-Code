#include<bits/stdc++.h>
#define maxn 500007
using namespace std;
int sum[maxn],r[maxn],l[maxn],a[maxn],belong[maxn],block,num,n,m;
inline void write(int x) {
	if(x<0) x=-x;
	if(x>9) write(x/10);
	putchar(x%10+'0');
}
inline int read() {
	int x=0,f=1;
	char ch;
	for(; !isdigit(ch); ch=getchar()) f=ch=='-'?-1:1;
	for(; isdigit(ch); ch=getchar()) x=x*10+ch-'0';
	return x*f;
}
inline int query(int x,int y) {
	int ans=0;
	if (belong[x]==belong[y]) {
		for(int i=x; i<=y; i++) ans+=a[i];
		return ans;
	}
	for(int i=x; i<=r[belong[x]]; i++) ans+=a[i];
	for(int i=belong[x]+1; i<=belong[y]-1; i++) ans+=sum[i];
	for(int i=l[belong[y]]; i<=y; i++) ans+=a[i];
	return ans;
}
inline void updata(int x,int y) {
	a[x]+=y;
	sum[belong[x]]+=y;
}
inline void build() {
	block=sqrt(n);
	num=n/block;
	if (n%block) num++;
	for(int i=1; i<=num; i++) {
		l[i]=(i-1)*block+1;
		r[i]=i*block;
	}
	for(int i=1; i<=n; i++) belong[i]=(i-1)/block+1;
	r[num]=n;
	for(int i=1; i<=num; i++)
		for(int j=l[i]; j<=r[i]; j++)
			sum[i]+=a[j];
}
int main() {
	n=read();
	m=read();
	for(int i=1; i<=n; i++) {
		a[i]=read();
	}
	build();
	for(int i=1; i<=m; i++) {
		int mode=read(),x=read(),y=read();
		if (mode==1) updata(x,y);
		else {
			write(query(x,y));
			putchar('\n');
		}
	}
	return 0;
}
