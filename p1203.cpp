#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
int n,ans,ans1;
void search(int a) {
	s2=s.substr(a)+s;
	s2.erase(n);
	s1=s2;
	reverse(s2.begin(),s2.end());
	int j=0;
	while(s1[j]=='w') {
		ans++;
		j+=1;
	}
	for(int i=j; i<n; i++) {
		if(s1[j]==s1[i]||s1[i]=='w') ans++;
		else break;
	}
	j=0;
	while(s2[j]=='w') {
		ans++;
		j+=1;
	}
	for(int i=j; i<n; i++) {
		if(s2[j]==s2[i]||s2[i]=='w') ans++;
		else break;
	}
	ans1=max(ans,ans1);
	ans=0;
}
int main() {
	cin>>n>>s;
	for(int i=0; i<n; i++) search(i);
	ans1=min(n,ans1);
	cout<<ans1<<endl;
	return 0;
}
