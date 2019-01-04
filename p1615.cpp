#include<iostream>
using namespace std;
long long s1[3],s2[3],g;
char m;
int main() {
	return cin>>s1[0]>>m>>s1[1]>>m>>s1[2]>>s2[0]>>m>>s2[1]>>m>>s2[2]>>g,cout<<((s2[0]-s1[0])*3600+(s2[1]-s1[1])*60+s2[2]-s1[2])*g<<endl,0;
}
