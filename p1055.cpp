#include<iostream>
using namespace std;
int main(){
	char isbn[14];
	int intisbn[11],truesbm=0;
	cin>>isbn;
	for(int i=0,j=1;i<=13;i++)
		if(isbn[i]!='-'){
			intisbn[j]=isbn[i]-'0';
			j++;
		}
	for(int i=1;i<=9;i++)
		truesbm+=i*intisbn[i];
	truesbm%=11;
	if(intisbn[10]==truesbm) cout<<"Right"<<endl;
	else{
		for(int i=0;i<=11;i++) cout<<isbn[i];
		cout<<truesbm<<endl;
	}
	return 0;
}
