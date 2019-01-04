#include<iostream>
#include<algorithm>
using namespace std;
struct m{
	int st,end;
	bool operator<(const m& b){
		return end<b.end;
	}
}ma[1000001];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>ma[i].st>>ma[i].end;
	sort(ma,ma+n+1);
	int now=0,ans=0;
	for(int i=1;i<=n;i++)
		if(now<=ma[i].st)
			now=ma[i].end,ans++;
	cout<<ans<<endl;
	return 0;
}
