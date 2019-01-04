#include<iostream>
#include<cstring>
using namespace std;
char a[101],b[101],c[101];
char r[27],v[27]= {};
bool visit[27]= {};
int main() {
	cin>>a>>b>>c;
	int lena=strlen(a),lenb=strlen(b),lenc=strlen(c);
	if(lena!=lenb||lena<26) {
		cout<<"Failed"<<endl;
		return 0;
	}
	for(int i=0; i<lena; i++) {
		if(!visit[a[i]-'A']) {
			r[a[i]-'A']=b[i];
			visit[a[i]-'A']=1;
			v[b[i]-'A']=a[i];
		} else if(r[a[i]-'A']!=b[i]) {
			cout<<"Failed"<<endl;
			return 0;
		}
	}
	for(int i=0;i<lena;i++)
        if(v[b[i]-'A']!=a[i]) {
			cout<<"Failed"<<endl;
			return 0;
		}
	for(int i=0; i<lenc; i++)
		cout<<r[c[i]-'A'];
	cout<<endl;
	return 0;
}
