#include<iostream>
using namespace std;
int n,dic[21][21],vis[21],ans;
string words[21];
char s;
void f(string a,string b,int x,int y) {
	int a1=a.length()-1,b1=b.length()-1;
	for(int i=0; i<=b1; i++)
		if(a[0]==b[i]) {
			int pos=0,tot=0;
			for(int j=i; j<=b1; j++)
				if(a[pos]==b[j]) {
					tot++;
					pos++;
					if(j==b1&&tot!=min(a1,b1)+1)
						dic[x][y]=tot;
				} else break;
		}
}
void dfs(int pos,int sum) {
	ans=max(ans,sum);
	for(int i=1; i<=n; i++) {
		if(dic[i][pos]&&vis[i]) {
			vis[i]--;
			int suml=sum+words[i].length()-dic[i][pos];
			dfs(i,suml);
			vis[i]++;
		}
	}
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>words[i];
		vis[i]=2;
	}
	cin>>s;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			f(words[i],words[j],i,j);
	for(int i=1; i<=n; i++) {
		if(words[i][0]==s) {
			vis[i]--;
			dfs(i,words[i].length());
			vis[i]++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
