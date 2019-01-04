#include<iostream>
#include<string>
using namespace std;
string word,a;
int main(){
	cin>>word;
	int n=1,ans1=0,ans2=0;
	bool flag=false;
	typedef unsigned int uint;
	for(uint i=0;i<word.length();i++) if(word[i]<='Z') word[i]+=32;
	while(cin>>a){ 
		for(uint i=0;i<a.length();i++) if(a[i]<='Z') a[i]+=32;
		if(a==word){
			if(!flag){
				flag=true;
				ans2=n-1;
			}
			ans1++;
		}
		n++;
	}
	if(flag) cout<<ans1<<" "<<ans2<<endl;
	else cout<<"-1"<<endl;
	return 0;
}
