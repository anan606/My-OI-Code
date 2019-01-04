#include<iostream>
#include<cstring>
using namespace std;
int rong[100001],ci[100001];
int main() {
	memset(rong,-1,sizeof(rong));
	int m,n,l=1,r,sum=0,temp;
	cin>>m>>n;
	r=m;
	temp=m+1;
	for(int k=1; k<=n; k++)
		cin>>ci[k];
	for(int k=1; k<=n; k++)
		for(int a=l; a<=r; a++) {
			if(rong[a]==ci[k])
				break;
			if(a==r&&rong[r]!=ci[k]) {
				sum++;
				rong[temp]=ci[k];
				temp++;
				l++;
				r++;
			}
		}
	cout<<sum<<endl;
	return 0;
}
