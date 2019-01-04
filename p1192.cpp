#include<iostream>
#include<cstdio>
using namespace std;
int s[100002]={1};
int main() {
	int n,k;
	cin>>n>>k;
	s[0]=1;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=k&&(i-j)>=0; j++)
			s[i]+=s[i-j];
		s[i]=s[i]%100003;
	}
	cout<<s[n]<<endl;
	return 0;
}
