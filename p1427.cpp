#include<iostream>
#include<cstring>
using namespace std;
long long a[101];
int main(){
	memset(a,1,sizeof(a));
	int i=1;
	while(a[i-1]){
		cin>>a[i];
		i++;
	}
	for(i=i-2;i>=1;i--)
		cout<<a[i]<<' ';
	return 0;
}
