#include <iostream>
using namespace std;
int main(){
	double n,sum=0.0,a=2.0;
	cin>>n;
	int i=1;
	for(i=1;sum<n;i++){
		sum+=a;
		a*=0.98;
	}
	cout<<--i<<endl;
	return 0;
}