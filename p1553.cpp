#include<iostream>
#include<string>
using namespace std;
int include(string& str,char c) {
	for(int i=0; i<str.length(); i++)
		if(str[i]==c)
			return i;
	return 0;
}
int main() {
	string str;
	int lei=0,mid,i,j=0,t;
	cin>>str;
	if(mid=include(str,'.')) lei=1;
	else if(mid=include(str,'/')) lei=2;
	else if(mid=include(str,'%')) lei=3;
	else lei=4;
	switch(lei) {
		case 1:
			i=mid-1;
			while(str[i]=='0') i--;
			for(; i>=0; i--,j++) cout<<str[i];
			if(!j) cout<<0;
			cout<<'.';
			i=str.length()-1;
			j=0;
			t=mid+1;
			while(str[i]=='0') i--;
			while(str[t]=='0') t++;
			for(; i>=t; i--,j++) cout<<str[i];
			if(!j) cout<<0;
			cout<<endl;
			break;
		case 2:
			i=mid-1;
			while(str[i]=='0') i--;
			for(; i>=0; i--,j++) cout<<str[i];
			if(!j) cout<<0;
			cout<<'/';
			i=str.length()-1;
			j=0;
			while(str[i]=='0') i--;
			for(; i>mid; i--,j++) cout<<str[i];
			if(!j) cout<<0;
			cout<<endl;
			break;
		case 3:
			i=str.length()-2;
			while(str[i]=='0') i--;
			for(; i>=0; i--,j++) cout<<str[i];
			if(!j) cout<<0;
			cout<<'%'<<endl;
			break;
		case 4:
			i=str.length()-1;
			while(str[i]=='0') i--;
			for(; i>=0; i--,j++) cout<<str[i];
			if(!j) cout<<0;
			cout<<endl;
			break;
	}
	return 0;
}
