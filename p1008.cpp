#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	bool flag=true;
	int n[10],a,b,c;
	for(a=100;a<=327;a++){
		flag=true;
		b=a*2;
		c=a*3;
		n[1]=a/100;
		n[2]=(a%100)/10;
		n[3]=a%10;
		n[4]=b/100;
		n[5]=(b%100)/10;
		n[6]=b%10;
		n[7]=c/100;
		n[8]=(c%100)/10;
		n[9]=c%10;
		sort(n,n+10);
		for(int i=1;i<=9;i++)
			if(n[i]!=i){
				flag=false;
				break;
			}
		if(flag) cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}