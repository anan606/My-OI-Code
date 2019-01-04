#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int ff[26];
int main() {
	int i,j,n,maxn=0;
	char a[81];
	for(i=0; i<4; i++) {
		gets(a);
		n=strlen(a);
		for(j=0; j<n; j++)if(a[j]>='A'&&a[j]<='Z')ff[a[j]-'A']++;
	}
	for(i=0; i<26; i++)maxn=max(maxn,ff[i]);
	for(i=maxn; i>0; i--) {
		for(j=0; j<26; j++)
			if(ff[j]>=i) cout<<"* ";
			else cout<<"  ";
		cout<<endl;
	}
	for(i=0; i<26; i++) cout<<char(i+'A')<<" ";
}
