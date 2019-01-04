#include<iostream>
using namespace std;
int a[101]; 
int main(){
	int n,ave=0,i,j,ans=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		ave+=a[i];
	}
	ave/=n;
	for(i=1;i<=n;i++) a[i]-=ave;
	i=0;
	j=n;
	while(!a[i]&&i<=n) i++;
	while(!a[j]&&j>=i) j--;
	while(i<j){
		ans++;
		a[i+1]+=a[i];
		a[i]=0;
		while(!a[i]&&i<=n) i++;
	}
	cout<<ans<<endl;
	return 0;
}
