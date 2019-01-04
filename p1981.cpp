#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int ans,a1,a2;
char sign;
int main() {
	cin>>a1;
	a1%=10000;
	while(cin>>sign) {
		cin>>a2;
		a2%=10000;
		switch(sign){
			case '+':
				ans+=a1;
				ans%=10000;
				a1=a2;
				break;
			case '*':
				a1*=a2;
				a1%=10000;
				break;
		}
	}
	ans+=a1;
	cout<<ans%10000;
	return 0;
}
