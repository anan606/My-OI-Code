#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char str[256];
	cin.getline(str,256);
	int a=0,b=0,c=0;
	for (int i=0; i<strlen(str); i++) {
		if (str[i+1]!=':') continue;
		switch (str[i]) {
			case 'a':
				switch(str[i+3]) {
					case 'a':
						break;
					case 'b':
						a=b;
						break;
					case 'c':
						a=c;
						break;
					default:
						a=str[i+3]-'0';
				}
				break;
			case 'b':
				switch(str[i+3]) {
					case 'b':
						break;
					case 'a':
						b=a;
						break;
					case 'c':
						b=c;
						break;
					default:
						b=str[i+3]-'0';
				}
				break;
			case 'c':
				switch(str[i+3]) {
					case 'c':
						break;
					case 'b':
						c=b;
						break;
					case 'a':
						c=a;
						break;
					default:
						c=str[i+3]-'0';
				}
				break;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}
