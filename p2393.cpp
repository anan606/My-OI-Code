#include<cstdio>
#include<iostream>
using namespace std;
long double a,sum;
int main() {
	if(cin>>a) {
		sum+=a*1000000;
		main();
	} else printf("%.5Lf",sum/1000000); 
	return 0;
}