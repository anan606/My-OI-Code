#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int s[10],t,temp;
// ofstream fout;
int main() {
	srand(time(0));
	// for(int abc=1; abc<=20; abc++) {
	int i,a,b,c;
	cin>>c;
	// while((c=rand()%1000+1)%10!=c/10%10&&c/10%10!=c/100%10&&c/100%10!=c/1000);
	// while(c<1000) c*=10;
	// fout.open("textdata"+to_string(abc)+".in");
	// fout<<c<<endl;
	// fout.close();
	// fout.open("textdata"+to_string(abc)+".out");
	a=b=0;
	while(a-b!=6174) {
		for(i=1; i<=4; i++) {
			s[i]=c%10;
			c=c/10;
		}
		for(i=1; i<=3; i++)
			for(int j=i+1; j<=4; j++)
				if(s[i]<s[j])
					swap(s[i],s[j]);
		a=s[1]*1000+s[2]*100+s[3]*10+s[4];
		b=s[4]*1000+s[3]*100+s[2]*10+s[1];
		c=a-b;
		cout<<a<<"-"<<b<<"="<<a-b<<endl;
	}
	cout<<"End"<<endl;
		// fout.close();
	// }
	return 0;
}
