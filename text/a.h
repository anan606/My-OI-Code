#include<iostream>
using namespace std;
#ifndef an
#define an
void input(int &n) {
	n=0;
	char a;
	bool b=false;
	while(true) {
		a=cin.get();
		if(a=='-') {
			b=true;
			break;
		}
		if(a>='0'&&a<='9') {
			n=a-'0';
			break;
		}
	}
	while(true) {
		a=cin.get();
		if(!(a>='0'&&a<='9'))
			return;
		n=n*10+(a-'0');
	}
}
#endif
