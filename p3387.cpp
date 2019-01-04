#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
#define N 100010
int n,m,u,v,cnt=0,num=0,tot=0;
int val[N],dfn[N],low[N],color[N],head[N],vis[N];
int sum[N],f[N];
int x[N],y[N],ans=0;
stack<int> st;
struct Edge{
    int to,nxt;
}edge[N];
void add(int a,int b){
    cnt++;
    edge[cnt].to=b;
    edge[cnt].nxt=head[a];
    head[a]=cnt;
}
void Tarjan(int u){
    st.push(u);
    vis[u]=1;
    dfn[u]=low[u]=++num;
    for(int i=head[u];i;i=edge[i].nxt){
        int v=edge[i].to;
        if(!dfn[v]){
            Tarjan(v);
            low[u]=min(low[u],low[v]);
        }
        else if(vis[v]){
            low[u]=min(low[u],dfn[v]);
        }
    }
    if(low[u]==dfn[u]){
        tot++;
        int t=0;
        while(t!=u){
            color[st.top()]=tot;
            sum[tot]+=val[st.top()];
            t=st.top();
            vis[st.top()]=0;
            st.pop();
        }
    }
}
void search(int x){
    if(f[x])return;
    f[x]=sum[x];
    int maxsum=0;
    for(int i=head[x];i;i=edge[i].nxt){
        int t=edge[i].to;
        if(!f[t])search(t);
        maxsum=max(maxsum,f[t]);
    }
    f[x]+=maxsum;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        x[i]=u,y[i]=v;
        add(u,v);
    }
    for(int i=1;i<=n;i++){
        if(!dfn[i]){
            Tarjan(i);
        }
    }
    memset(edge,0,sizeof(edge));
    memset(head,0,sizeof(head));
    cnt=0;
    for(int i=1;i<=m;i++){
        if(color[x[i]]!=color[y[i]]){
            add(color[x[i]],color[y[i]]);
        }
    }
    for(int i=1;i<=tot;i++){
        if(!f[i]){
            search(i);
            ans=max(ans,f[i]);
        }
    }
    cout<<ans;
    return 0;
}