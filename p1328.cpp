#include<iostream>
using namespace std;
int xa[201]= {},xb[201]= {};
int main() {
	int n,na,nb,i=0,j=0,ansa=0,ansb=0;
	cin>>n>>na>>nb;
	for(int i=1; i<=na; i++) cin>>xa[i];
	for(int i=1; i<=nb; i++) cin>>xb[i];
	for(int a=1; a<=n; a++) {
		i++;
		j++;
		if(i>na) i=1;
		if(j>nb) j=1;
		if(xa[i]==0&&xb[j]==1) ansb++;
		else if(xa[i]==0&&xb[j]==2) ansa++;
		else if(xa[i]==0&&xb[j]==3) ansa++;
		else if(xa[i]==0&&xb[j]==4) ansb++;
		else if(xa[i]==1&&xb[j]==0) ansa++;
		else if(xa[i]==1&&xb[j]==2) ansb++;
		else if(xa[i]==1&&xb[j]==3) ansa++;
		else if(xa[i]==1&&xb[j]==4) ansb++;
		else if(xa[i]==2&&xb[j]==0) ansb++;
		else if(xa[i]==2&&xb[j]==1) ansa++;
		else if(xa[i]==2&&xb[j]==3) ansb++;
		else if(xa[i]==2&&xb[j]==4) ansa++;
		else if(xa[i]==3&&xb[j]==0) ansb++;
		else if(xa[i]==3&&xb[j]==1) ansb++;
		else if(xa[i]==3&&xb[j]==2) ansa++;
		else if(xa[i]==3&&xb[j]==4) ansa++;
		else if(xa[i]==4&&xb[j]==0) ansa++;
		else if(xa[i]==4&&xb[j]==1) ansa++;
		else if(xa[i]==4&&xb[j]==2) ansb++;
		else if(xa[i]==4&&xb[j]==3) ansb++;
	}
	cout<<ansa<<" "<<ansb<<endl;
	return 0;
}
