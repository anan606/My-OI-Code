#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct person {
	int num;
	int sc;
} people[5001];
bool cmp(person p1,person p2) {
	if(p1.sc!=p2.sc)
		return p1.sc>p2.sc;
	return p1.num<p2.num;
}
int main() {
	int n,m;
	cin>>n>>m;
	m=floor(m*1.5);
	for(int i=0; i<n; i++)
		cin>>people[i].num>>people[i].sc;
	sort(people,people+n,cmp);
	int fenshuxian=people[m-1].sc;
	int renshu=m;
	for(int i=m; i<n; i++)
		if(people[i].sc==fenshuxian)renshu+=1;
		else if(people[i].sc<fenshuxian)break;
	cout<<fenshuxian<<" "<<renshu<<endl;
	for(int i=0; i<renshu; i++)
		cout<<people[i].num<<" "<<people[i].sc<<endl;
	return 0;
}
