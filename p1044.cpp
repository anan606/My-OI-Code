#include<iostream>
using namespace std;
int main(){
	int n,i,j,f[20]={1,1};
	cin>>n;
	for(i=2;i<=n;i++)
		for(j=0;j<i;j++)
			f[i]+=f[j]*f[i-j-1];
	cout<<f[n]<<endl;
	return 0;
}
