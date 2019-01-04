#include<iostream>
#include<algorithm>
using namespace std;
struct time {
    int b,j;
} a[1001];
bool cmp(time a,time b) {
    return a.j>b.j;
}
int main() {
    int n,num=0;
    cin>>n;
    while(n) {
        int ans=0,s=0;
        for(int i=1; i<=n; i++)
            cin>>a[i].b>>a[i].j;
        sort(a+1,a+n+1,cmp);
        for(int i=1; i<=n; i++) {
            s+=a[i].b;
            ans=max(ans,s+a[i].j);
        }
        cout<<"Case "<<++num<<": "<<ans<<"\n";
        cin>>n;
    }
    return 0;
}
