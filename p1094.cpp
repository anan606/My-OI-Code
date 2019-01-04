#include <iostream>
#include <algorithm>
using namespace std;
int n,k,a[30001],maxn = 0,minn,nn = 0;
int main() {
	cin>>k>>n;
	minn = n-1;
	for(int i = 0; i<n; i++) {
		cin>>a[i];
	}
	sort(a,a+n);
	while(maxn<minn-1) {
		if(a[maxn]+a[minn]<=k) {
			nn++;
			maxn++;
			minn--;
		} else {
			nn++;
			minn--;
		}
	}
	cout<<nn+1<<endl;
}
