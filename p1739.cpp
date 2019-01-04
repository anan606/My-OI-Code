#include<iostream>
using namespace std;
int main() {
	char c;
	int zuo=0,you=0;
	do {
		cin>>c;
		if (c=='(') zuo++;
		if (c==')') you++;
		if (you>zuo){
			cout<<"NO"<<endl;
			return 0;
		}
	} while (c!='@');
	if (zuo==you) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
