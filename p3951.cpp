#include<iostream>
using namespace std;
int main() {
	long long a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	cout<<((a-1)*b/a-1)*a+((0+(a-1)*b)%a)<<endl;
	return 0;
}
