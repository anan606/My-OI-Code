#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	string s;
	int n;
	cin>>n>>s;
	for(int i=2; i<=n; ++i) {
		string ss;
		cin>>ss;
		int x=s.find(ss[0]);
		s.erase(x,1);
		s.insert(x,ss);
	}
	for(char ch:s)
		if(ch!='*') cout<<ch;
	return 0;
}
