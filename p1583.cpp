#include<iostream>
#include<algorithm>
using namespace std;
int e[12],n,k;
struct person {
	int w;
	int num;
	int d;
} p[20010];
int comp(const person &a,const person &b) {
	if(a.w!=b.w) return a.w>b.w;
	return a.num<b.num;
}
int main() {
	cin>>n>>k;
	for(int i=0; i<10; i++) cin>>e[i];
	for(int i=0; i<n; i++) {
		cin>>p[i].w;
		p[i].num=i+1;
	}
	sort(p,p+n,comp);
	for(int i=0; i<n; i++) {
		p[i].d=i%10;
		p[i].w+=e[p[i].d];
	}
	sort(p,p+n,comp);
	for(int i=0; i<k; i++)cout<<p[i].num<<" ";
	cout<<endl;
}
