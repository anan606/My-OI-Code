#include<iostream>
// #define ll long long
using namespace std;
typedef long long ll;
const int maxn=5e5+5;
int a[maxn],r[maxn],n;
ll ans=0;
void msort(int s,int t){
	if(s==t) return ;
	int mid=s+t>>1;
	msort(s,mid),msort(mid+1,t);
	int i=s,j=mid+1,k=s;
	while(i<=mid&&j<=t)
		if(a[i]<=a[j]) r[k++]=a[i++];
		else r[k++]=a[j++],ans+=(ll)mid-i+1;
	while(i<=mid) r[k]=a[i],k++,i++;
	while(j<=t) r[k]=a[j],k++,j++;
	for(int i=s;i<=t;i++) a[i]=r[i];
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	msort(1,n);
	cout<<ans<<endl;
	return 0;
}