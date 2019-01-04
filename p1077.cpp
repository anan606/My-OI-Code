#include<iostream>
#define mod 1000007
using namespace std;
long long num[105],mem[105][105],n,m;
bool tf[105][105];
int dfs(long long x,long long v) {
	if(v < 0) return 0;
	if(x == n) {
		if(v >= 0&&v <= num[x])return 1;
		else return 0;
	}
	if(tf[x][v]) return mem[x][v]%mod;
	long long count=0;
	for(int i=0; i <= num[x]; i++) {
		count+=dfs(x+1,v-i);
		count%=mod;
	}
	mem[x][v]=count;
	tf[x][v]=true;
	return mem[x][v]%mod;
}
int main() {
	cin>>n>>m;
	for(int i=1; i <= n; i++) cin>>num[i];
	cout<<dfs(1,m)<<endl;
	return 0;
}
