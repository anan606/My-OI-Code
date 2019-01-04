#include<cstring>
#include<iostream>
using namespace std;
char s[300],cc;
int a[10]= {1,0,1,1,0,1,1,1,1,1};
int b[10]= {1,0,0,0,1,1,1,0,1,1};
int c[10]= {1,1,1,1,1,0,0,1,1,1};
int d[10]= {0,0,1,1,1,1,1,0,1,1};
int e[10]= {1,0,1,0,0,0,1,0,1,0};
int f[10]= {1,1,0,1,1,1,1,1,1,1};
int g[10]= {1,0,1,1,0,1,1,0,1,1};
int main() {
	int size;
	cin>>size>>s;
	int len=strlen(s);
	for(int i=0; i<len; i++) {
		cout<<" ";
		if(a[s[i]-'0']) cc='-';
		else cc=' ';
		for(int j=1; j<=size; j++) cout<<cc;
		cout<<" ";
		if(i!=len-1) cout<<" ";
	}
	cout<<endl;
	for(int j=1; j<=size; j++) {
		for(int i=0; i<len; i++) {
			if(b[s[i]-'0']) cc='|';
			else cc=' ';
			cout<<cc;
			for(int k=1; k<=size; k++) cout<<" ";
			if(c[s[i]-'0']) cc='|';
			else cc=' ';
			cout<<cc;
			if(i!=len-1) cout<<" ";
		}
		cout<<endl;
	}

	for(int i=0; i<len; i++) {
		cout<<" ";
		if(d[s[i]-'0']) cc='-';
		else cc=' ';
		for(int j=1; j<=size; j++) cout<<cc;
		cout<<" ";
		if(i!=len-1) cout<<" ";
	}
	cout<<endl;
	for(int j=1; j<=size; j++) {
		for(int i=0; i<len; i++) {
			if(e[s[i]-'0']) cc='|';
			else cc=' ';
			cout<<cc;
			for(int k=1; k<=size; k++) cout<<" ";
			if(f[s[i]-'0']) cc='|';
			else cc=' ';
			cout<<cc;
			if(i!=len-1) cout<<" ";
		}
        cout<<endl;
	}
	for(int i=0; i<len; i++) {
		cout<<" ";
		if(g[s[i]-'0']) cc='-';
		else cc=' ';
		for(int j=1; j<=size; j++) cout<<cc;
		cout<<" ";
		if(i!=len-1) cout<<" ";
	}
	cout<<endl;
	return 0;
}
