#include<iostream>
#include<cctype>
using namespace std;
string str;
bool isRC() {
	if (str[0]!='R') return false;
	unsigned i=1;
	for (;i<str.size()&&'A'<=str[i]&&str[i]<='Z';i++);
	for (;i<str.size()&&'0'<=str[i]&&str[i]<='9';i++);
	if (i>=str.size()||str[i]!='C') return false;
	return true;
}
int main() {
	int i,t,n,l,row;
	string ans;
	cin>>n;
	while(n--) {
		row=0;
		cin>>str;
		l=str.size();
		if(isRC()) {
			for(i=1; i<l; i++) {
				if(str[i]>'9') {
					t=i;
					break;
				}
			}
			string sub=str.substr(1,t-1);
			for(i=t+1; i<l; i++)
				row=row*10+str[i]-'0';
			while(row) {
				int r=row%26;
				row=row/26;
				if(!r) {
					r=26;
					row=row-1;
				}
				ans+=(char)(r+'A'-1);
			}
			int en=ans.size();
			for(i=en-1; i>=0; i--)
				cout<<ans[i];
			cout<<sub<<endl;
			ans.clear();
		} else {
			for(i=0; i<l; i++) {
				if(str[i]<='9') {
					t=i;
					break;
				}
			}
			string sub=str.substr(t,l);
			for(i=0; i<t; i++)
				row=row*26+str[i]-'A'+1;
			cout<<"R"<<sub<<"C"<<row<<endl;
		}
		str.clear();
	}
	return 0;
}
