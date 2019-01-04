#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
struct r {
	int time,NO;
} a[100000];
bool cmp(r a,r b) {
	if(a.time==b.time) return a.NO<b.NO;
	return a.time<b.time;
}
int main() {
	int n;
	double b=0;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[a[i].NO=i].time;
	sort(a+1,a+1+n,cmp);
	for(int i=1; i<=n; i++) {
		cout<<a[i].NO<<" ";
		b+=a[i].time*(n-i);
	}
	cout<<endl<<fixed<<setprecision(2)<<b/n<<endl;
	return 0;
}
