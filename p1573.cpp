#include<iostream>
#define mod 1000007ll
using namespace std;
typedef long long ll;
ll n,ans;
int main() {
	cin>>n;
	ll to;
	for(ll i=1; i<=n; ++i)
		if((i+1)*i>=2*n) {
			to=i-1;
			break;
		}
	ll last=1;
	for(ll i=1; i<=to; ++i) {
		ll it=i*last;
		it%=mod;
		ans+=it;
		ans%=mod;
		last*=2;
		last%=mod;
	}
	ll need=2*n-to*to-to;
	need/=2;
	ans+=1ll*(need*last)%mod;
	ans%=mod;
	cout<<ans<<endl;
}
