#include<iostream>
#include<cstdio>
using namespace std;
string s[111],ans[111];
const int a[8]= {0,-1,-1,-1,0,1,1,1},b[8]= {1,1,0,-1,-1,-1,0,1};
int main() {
	int t1,t2,kk,k,i,j,n;
	bool bb;
	cin>>n;
	for (i=1; i<=n; i++) cin>>s[i];
	for (i=1; i<=n; i++)
		for (j=1; j<=n; j++)
			ans[i]+='0';
	for (i=1; i<=n; i++)
		for (j=0; j<=n-1; j++)
			if (s[i][j]=='y') {
				for (k=0; k<=7; k++) {
					t1=i;
					t2=j;
					bb=1;
					for (kk=1; kk<=6; kk++) {
						t1+=a[k];
						t2+=b[k];
						if (t1<1||t1>n||t2<0||t2>n-1) bb=0;
						if (bb==0) break;
						if (kk==1&&s[t1][t2]!='i') bb=0;
						if (kk==2&&s[t1][t2]!='z') bb=0;
						if (kk==3&&s[t1][t2]!='h') bb=0;
						if (kk==4&&s[t1][t2]!='o') bb=0;
						if (kk==5&&s[t1][t2]!='n') bb=0;
						if (kk==6&&s[t1][t2]!='g') bb=0;
					}
					t1=i;
					t2=j;
					if (bb) for (kk=0; kk<=6; kk++) ans[t1][t2]=s[t1][t2],t1+=a[k],t2+=b[k];
				}
			}
	for (i=1; i<=n; i++)
		for (j=0; j<=n-1; j++)
			if (ans[i][j]=='0') ans[i][j]='*';
	for (i=1; i<=n; i++)
		cout<<ans[i]<<endl;
	return 0;
}
