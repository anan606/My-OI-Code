#include<bits/stdc++.h>
using namespace std;
const int mod=80112002;
bool nHst[5050];
//false -> 食物链顶端
vector<int>Eat[5050];
int dp[5050];
int n,m;
int ans;
int dfs(int now){
    if(!Eat[now].size()) return dp[now]=1;
    int res=0;
    for(int i=0;i<Eat[now].size();i++){
        int &nxt=Eat[now][i];
        res+=dp[nxt]?dp[nxt]:dfs(nxt);
        res%=mod;
    }
    return dp[now]=res;
}
int main(){
    cin>>n>>m;
    int x,y;
    while(m--){
        scanf("%d%d",&x,&y);
        //y吃x
        Eat[y].push_back(x);
        nHst[x]=true;
    }
    for(int i=1;i<=n;i++) 
		if(!nHst[i]) 
   		    ans=(ans+dfs(i))%mod;
    cout<<ans;    
    return 0;
}