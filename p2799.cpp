#include<iostream>
#include<string>
using namespace std;
void solve(string s) {
	int len=s.length();
	string s1,s2;
	for(int i=len/2-1; i>=0; i--)
		s1+=s[i];
	for(int i=len/2; i<len; i++)
		s2+=s[i];
	if(s1==s2) solve(s1);
	else {
		cout<<len<<endl;
		return;
	}
}
int main() {
	string s;
	cin>>s;
	solve(s);
	return 0;
}
