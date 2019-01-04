#include <iostream>
using namespace std;
int main() {
	int longstr=0,yiding=0,yiaite=1;
	string now,zha,name,panding;
	while(cin>>now) {
		if(now=="yyy") {
			cin>>now;
			if(now=="loves") {
				cin>>now;
				if(now!="@yyy") {
					cin>>panding;
					if(panding==":") {
						if(yiaite!=1) {
							cout<<"Unsuccessful @yyy loves "<<zha<<" attempt"<<endl;
							cout<<longstr<<endl;
							cout<<"yyy loves "<<name<<endl;
							return 0;
						}
						longstr++;
						yiaite=0;
						name=now;
						if(name==zha) {
							cout<<"Successful @yyy loves "<<zha<<" attempt"<<endl;
							return 0;
						}
						continue;
					} else if(panding=="@yyy")
						goto e2;
				}
			}
		}
		if(now==":") {
			longstr++;
			yiaite=0;
		}
		if(now=="@yyy") {
e2:

			yiaite++;
			cin>>now>>now;
			if(yiding==0) {
				zha=now;
				yiding=1;
				continue;
			}
			if(now!=zha) {
				cout<<"Unsuccessful @yyy loves "<<zha<<" attempt"<<endl;
				cout<<longstr<<endl;
				cout<<"yyy loves "<<name<<endl;
				return 0;
			}
		}
	}
	if(yiaite!=1) {
		cout<<"Unsuccessful @yyy loves "<<zha<<" attempt"<<endl;
		cout<<longstr<<endl;
		cout<<"yyy loves "<<name<<endl;
		return 0;
	}
	cout<<"Unsuccessful @yyy loves "<<zha<<" attempt"<<endl;
	cout<<longstr<<endl;
	cout<<"Good Queue Shape"<<endl;
	return 0;
}