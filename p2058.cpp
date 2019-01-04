#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int country[100001];
struct people{
	int t,x;
};
int main(){
	queue<people> q;
	int n,t,p,c,count=0;
	cin>>n;
	memset(country,0,sizeof(country));
	for (int i=0;i<n;i++){
		cin>>t>>p;
		for (int j=0;j<p;j++){
			cin>>c;
			q.push((people){t,c});
			if (country[c]==0)  count++;
			country[c]++;
		}
		while (q.back().t-q.front().t>=86400){
			if (--country[q.front().x]==0)  count--;
			q.pop();
		}
		cout<<count<<endl;
	}
	return 0;
}