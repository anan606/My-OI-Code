#include<iostream>
using namespace std;
bool visit[10001];
struct quyu{
	int start,end;
}m[101];
int main(){
	int l,mm,sum=0;
	cin>>l>>mm;
	for(int i=1;i<=mm;i++){
		cin>>m[i].start>>m[i].end;
		if(m[i].start<m[i].end)
			for(int j=m[i].start;j<=m[i].end;j++)
				visit[j]=true;
		else
			for(int j=m[i].end;j>=m[i].start;j--)
				visit[j]=true;
	}
	for(int i=1;i<=l;i++)
		if(!visit[i]) sum++;
	cout<<sum<<endl; 
	return 0;
}
