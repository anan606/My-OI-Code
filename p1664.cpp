#include<iostream>
using namespace std;
int main() {
	int n,t=0,a,d=0,m=0;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a;
		if(a==1) {
			if(m>0) d-=1<<m-1;
			if(d<0) d=0;
			t++;d++;m=0;
			if(d>=3) t++;
			if(d>=7) t++;
			if(d>=30) t++;
			if(d>=120) t++;
			if(d>=365) t++;
		}else if(a==0) m++;
	}
	cout<<t<<endl;
	return 0;
}