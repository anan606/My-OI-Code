#include <iostream>
#include <algorithm>
using namespace std;
struct gun{
    int l,w;
}a[5010];
int n,f[5010]={0},ans=0;
bool cmp(gun a,gun b){
    return a.l>b.l;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
		cin>>a[i].l>>a[i].w;
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        if(a[i].w>f[ans]){
            f[ans+1]=a[i].w;
            ++ans;
        }
        else{
            int l=1,r=ans;
            while(l<r){
                int mid=(l+r)/2;
                if(f[mid]>=a[i].w){
                    r=mid;
                }
                else{
                    l=mid+1;
                }
            }
            f[l]=a[i].w;
        }
    }
   cout<<ans<<endl;
    return 0;
}