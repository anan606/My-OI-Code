#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int n,v[1001];
double x[100];
double y[20];
double dis[1001][1001];
double ans=1231234424.0; 
void dfs(int step,int now,double length) {
	if(length>ans)
		return;                                                        
	if(step==n) { 
		ans=min(ans,length);  
		return;
	}
	for(int i=1; i<=n; i++) 
		if(!v[i]) { 
			v[i]=1;  
			dfs(step+1,i,length+dis[now][i]);  
			v[i]=0;  
		}
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>x[i]>>y[i];
	x[0]=0;
	y[0]=0;  
	for(int i=0; i<=n; i++) 
		for(int j=0; j<=n; j++)
			dis[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
	dfs(0,0,0.0);  
	printf("%.2f",ans);
	return 0;
}