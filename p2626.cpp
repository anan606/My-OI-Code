#include<iostream>
using namespace std;
long long n,f[49];
long long p=1<<31;
int main() {
    bool x=1;
    cin>>n;
    f[1]=1;
    f[2]=1;
    for(int i=3; i<=n; i++)
        f[i]=(f[i-1]+f[i-2])%p;
    cout<<f[n]<<"=";
    for(int i=2; i<=f[n]; i++)
        while(!(f[n]%i)) {
            if(x) {
                x=0;
                cout<<i;
            } else cout<<'*'<<i;
            f[n]/=i;
        }
    cout<<endl;
}
