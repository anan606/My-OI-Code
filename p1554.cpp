#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int ans[10];
char str[100];
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		sprintf(str,"%d",i);
		for(int j=0;j<strlen(str);j++)
			for(int k=0;k<10;k++)
				ans[k]+=k==str[j]-'0';
	}
	for(int i=0;i<10;i++) cout<<ans[i]<<" ";
	return 0;
}
