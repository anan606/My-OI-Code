#include<iostream>
using namespace std;
int prime(int x) {
	if(x==2) return 0;
	if(x==1||x%2==0) return 1;
	for (int i=3; i*i<=x; i+=2)
		if (x%i==0)
			return 1;
	return 0;
}
int main() {
	int a;
	cin>>a;
	for (int n1=2; n1<=a; n1++)
		for (int n2=2; n2<=a; n2++) {
			int n3=a-n1-n2;
			if (prime(n1)+prime(n2)+prime(n3))
				continue;
			cout<<n1<<' '<<n2<<' '<<n3<<endl;
			return 0;
		}
    return 0;
}
