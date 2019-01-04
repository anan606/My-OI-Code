#include<iostream>
using namespace std;
long long fun(int x,int n){
	long long ans=1;
	for(int i=1;i<=n;i++) ans=ans*x+ans;
	return ans; 
}
int main(){
	int x,n;
	cin>>x>>n;
	cout<<fun(x,n)<<endl;
	return 0;
}
