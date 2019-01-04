#include<iostream>
#include<algorithm>
using namespace std;
int a[10005],n,m;
int main(){
	cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    while(m--) next_permutation(a,a+n);
	cout<<a[0];
    for(int i=1;i<n;i++)  cout<<" "<<a[i];
	cout<<endl;
    return 0;
}