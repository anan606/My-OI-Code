#include<iostream>
using namespace std;
int main() {
	int n;
	while(cin>>n) {
		cout<<"2 "<<n<<" "<<n<<endl;
		for(int i=0; i< n; i++) {
			for(int j=0; j<n; j++) {
				if(i<26)
					cout<<char('A'+i);
				else
					cout<<char('a'+i-26);
			}
			cout<<endl;
		}
		cout<<endl;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(j<26)
					cout<<char('A'+j);
				else
					cout<<char('a'+j-26);
			}
			cout<<endl;
		}
	}
	return 0;
}
