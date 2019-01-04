#include<iostream>
#include<cstring>
using namespace std;
char c[65];
int main() {
	int n;
	cin>>n;
	while(n--) {
		cin>>c;
		cout<<((c[strlen(c)-1]-'0')%2?"odd":"even")<<endl;
	}
	return 0;
}
