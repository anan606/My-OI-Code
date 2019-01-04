#include<iostream>
using namespace std;
int main() {
	int jj=0,x,mother=0;
	for(int i=1; i<=12; i++) {
		cin>>x;
		jj+=300-x;
		if(jj>=100) {
			mother+=120*(jj/100);
			jj%=100;
		}
		if(jj<0) {
			cout<<"-"<<i<<endl;
			return 0;
		}
	}
	cout<<mother+jj<<endl;
	return 0;
}
