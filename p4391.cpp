#include<iostream>
#include<cstdio>
using namespace std;
char str[1000006];
int a[1000006];
int main() {
	int n;
	cin>>n;
	scanf("%s",str+1);
	for(int i=2; i<=n; i++) {
		int j=a[i-1];
		while(j&&str[j+1]!=str[i]) j=a[j];
		if(str[j+1]==str[i]) j++;
		a[i]=j;
	}
	cout<<n-a[n];
	return 0;
}
