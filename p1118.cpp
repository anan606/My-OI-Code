#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
int num_a[15];
int log_a[15][15];
int cmp(int t1,int t2) {
	return t1>t2;
}
int main() {
	int n,sum;
	cin>>n>>sum;
	for(int i=1; i<=n; i++) num_a[i]=i;
	for(int i=1; i<=n; i++)log_a[i][1]=log_a[i][i]=1;
	for(int i=3; i<=n; i++) {
		for(int k=1; k<=(i-1)/2; k++) {
			log_a[i][k+1]=log_a[i][i-k]=log_a[i-1][k]+log_a[i-1][k+1];
		}
	}
	do {
		int out_a=0;
		int num_tmp[15];
		memcpy(num_tmp,num_a,sizeof(num_tmp));
		int tsum=0;
		for(int i=1; i<=n; i++) {
			tsum+=num_tmp[i]*log_a[n][i];
			if(tsum>sum) {
				sort(num_a+i,num_a+n+1,cmp);
				out_a=1;
				break;
			}
		}
		if(out_a) continue;
		if(tsum==sum) {
			for(int i=1; i<=n; i++) {
				cout<<num_a[i]<<" ";
			}
			break;
		}
	} while(next_permutation(num_a+1,num_a+1+n));
}
