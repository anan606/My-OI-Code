#include<iostream>
#include<cstring>
using namespace std;
int n,i,cnt,a[100];
int b[100],vis[100];
void dfs(int l) {
    for(int i=2; i<=n; i++)
        if(!vis[i]&&b[a[l-1]+i]) {
            vis[i]=1;
            a[l]=i;
            if(l==n) {
                if(b[i+1]) {
                    for(int j=1; j<n; j++) cout<<a[j]<<" ";
                    cout<<a[n];
                    cout<<endl;
                }
            } else dfs(l+1);
            vis[i]=0;
        }
}
int main() {
    b[2]=b[3]=b[5]=b[7]=b[11]=b[13]=b[17]=b[19]=b[23]=b[29]=b[31]=1;
    int t=0;
    while(cin>>n) {
        cnt++;
        memset(vis,0,sizeof(vis));
        if(t!=0) cout<<endl;
        cout<<"Case "<<cnt<<":"<<endl;
        t++;
        a[1]=1;
        dfs(2);
    }
    return 0;
}
