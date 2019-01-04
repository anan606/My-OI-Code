#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int n,m,a[200],b[200];
int gcd(int a,int b){
	if (a<b)
		swap(a,b);
	return b==0?a:gcd(b,a%b);
}
int main(int argc, char const *argv[]){
	scanf("%d%d",&n,&m);
	for (int i = 0; i <= n; ++i)
		scanf("%d",&a[i]);
	for (int i = 0; i <= m; ++i)
		scanf("%d",&b[i]);
	if (n<m) {
		printf("0/1\n");
		return 0;
	}
	if (n>m)
		if (a[0]*b[0]>0) {
			printf("Infinity\n");
			return 0;
		}
		else {
			printf("-Infinity\n");
			return 0;
		}
	if (a[0]*b[0]<0)
		printf("-");
	if (a[0]<0)
		a[0]=-a[0];
	if (b[0]<0)
		b[0]=-b[0];
	int GCD=gcd(a[0],b[0]);
	printf("%d/%d\n", a[0]/GCD,b[0]/GCD);
	return 0;
}