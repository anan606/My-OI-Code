#include<iostream>
using namespace std;
long long f[49]= {0,1,1};
int main() {
    int n;
    cin>>n;
    for (int i=3; i<=n; i++)
        f[i]=f[i-1]+f[i-2];
    cout<<f[n]<<".00"<<endl;
    return 0;
}
