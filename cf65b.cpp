#include<iostream>
#include<cctype>
#define Max 1000000
using namespace std;
int n;
int a[20];
int b[20];
int ans;
int read() {
	int s=0;
	char c=getchar();
	while(!isdigit(c))
		c=getchar();
	while(isdigit(c)) {
		s=(s<<1)+(s<<3)+c-'0';
		c=getchar();
	}
	return s;
}
int main() {
	int i,j;
	n=read();
	for(i=1; i<=n; i++)
		a[i]=read();
	for(i=1; i<=n; i++)
		b[i]=read();
	for(j=0; j<Max; j++)
		for(i=1; i<=n; i++)
			if(j%a[i]==b[i]) {
				ans++;
				break;
			}
	cout<<ans/1000000.0<<endl;
	return 0;
}
